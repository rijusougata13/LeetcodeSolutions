class Solution {
public:
    int dp[1001][1001];
    int test(int i,int j,vector<int>arr){
        if(j<=i)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int left=arr[i]+min(test(i+2,j,arr),test(i+1,j-1,arr));
        int right=arr[j]+min(test(i+1,j-1,arr),test(i,j-2,arr));
        return dp[i][j]=max(left,right);
        
        
    }
    bool stoneGame(vector<int>& piles) {
        int tot=0;
        memset(dp,-1,sizeof(dp));
        for(auto x:piles)tot+=x;
        int x=test(0,piles.size()-1,piles);
        if(x>(tot-x))return true;
        return false;
    }
};