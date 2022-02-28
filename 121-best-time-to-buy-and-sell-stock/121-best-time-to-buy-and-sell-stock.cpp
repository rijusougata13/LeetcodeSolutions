class Solution {
public:
    int maxProfit(vector<int>& prices) {
int n=prices.size();
        vector<pair<int,int>>arr(n,{1e7,0});
        arr[0].first=prices[0];
        arr[n-1].second=prices[n-1];
        for(int i=1;i<n;i++){
            arr[i].first=min(prices[i],arr[i-1].first);
            
        }
        for(int i=n-2;i>=0;i--){
            arr[i].second=max(prices[i],arr[i+1].second);
            
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,arr[i].second-arr[i].first);
        }
        return ans;
    }
};