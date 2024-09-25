class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        long long ans=LLONG_MAX;
        long long tot=0;
       
        for(int i=0;i<grid[0].size()-1;i++){
           
            tot+=grid[1][i];
        }
        
        long long tit=0;
        ans=tot;
       
        for(int i=grid[0].size()-2;i>=0;i--){
            tit+=grid[0][i+1];
            tot-=grid[1][i];
            ans=min((long long)ans,max(tit,tot));
        }

        return ans;
    }
};

