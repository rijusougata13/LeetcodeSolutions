class LFUCache {
public:
    int _cap;
    unordered_map<int,list<pair<int,int>>>mpp;
    unordered_map<int,list<pair<int,int>>::iterator>hsh;
    unordered_map<int,int>cnt;
    
    LFUCache(int capacity) {
        _cap=capacity;
    }
    
    int get(int key) {
        auto it=hsh.find(key);
        if(it==hsh.end())return -1;
       mpp[cnt[key]+1].splice(mpp[cnt[key]+1].begin(),mpp[cnt[key]],it->second);  
        cnt[it->second->first]+=1;
        return it->second->second;
    }
    
    void put(int key, int value) {
        if(_cap==0)return;
        auto it=hsh.find(key);
        if(it==hsh.end()){
            
            if(hsh.size()==_cap){

              for(int i=1;i<1000000;i++){
                    if(mpp.find(i)!=mpp.end() and mpp[i].size()>0){
                        hsh.erase(mpp[i].back().first);
                        cnt.erase(mpp[i].back().first);
                        mpp[i].pop_back();
                        break;
                    }
              }
            }
            mpp[1].emplace_front(key,value);
            hsh[key]=mpp[1].begin();
            cnt[key]=1;
        
            
        }
        else{
            it->second->second=value;
            cnt[key]+=1;
            mpp[cnt[key]].splice(mpp[cnt[key]].begin(),mpp[cnt[key]-1],it->second);
            
        }
    }
};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */