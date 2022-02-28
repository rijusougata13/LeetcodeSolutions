class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int tot=0,last=prices[0];
        for(int i=0;i<prices.size();i++){
            if(prices[i]>=last){
                tot+=prices[i]-last;
                last=prices[i];
            }
            else{
                last=min(last,prices[i]);
            }
        }
        return tot;
    }
};