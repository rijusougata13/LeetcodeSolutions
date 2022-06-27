class LRUCache {



public:
    int _cap;
    list<pair<int,int>>lst;
    unordered_map<int,list<pair<int,int>>::iterator>mp;
    
    LRUCache(int capacity) {
        _cap=capacity;
    }
    
    int get(int key) {
        auto it=mp.find(key);
        if(it==mp.end())return -1;
        
        lst.splice(lst.begin(),lst,it->second);
        return it->second->second;
    }
    
    void put(int key, int value) {
        auto it=mp.find(key);
        if(it==mp.end()){
            if(lst.size()==_cap){
                mp.erase(lst.back().first);
                lst.pop_back();
            }
            lst.emplace_front(key,value);
            mp[key]=lst.begin();
        }
        else{
            it->second->second=value;
            lst.splice(lst.begin(),lst,it->second);
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */