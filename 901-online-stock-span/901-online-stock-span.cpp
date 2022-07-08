class StockSpanner {
public:
    int ans=0;
    stack<pair<int,int>>q;
    StockSpanner() {
        ans=0;
    }
    
    int next(int price) {
        int cnt=1;
        while(!q.empty()){
            pair<int,int>p=q.top();
            if(p.first>price){
                break;
            }
            
            q.pop();
            
            cnt+=p.second;
            
        }
        q.push({price,cnt});
        ans=cnt;
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */