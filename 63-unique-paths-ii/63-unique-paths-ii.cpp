class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        
        vector<vector<int>>arr(n,vector<int>(m,0));
        // cout<<obstacleGrid[0][0]<<" "<<obstacleGrid[n-1][m-1]<<" "<<n-1<<" "<<m-1<<endl;
        if(obstacleGrid[0][0]==1 or obstacleGrid[n-1][m-1]==1)return 0;
        for(int i=0;i<m;i++){
            if(obstacleGrid[0][i]==1)break;
            else arr[0][i]=1;
        }
        for(int i=0;i<n;i++){
            if(obstacleGrid[i][0]==1)break;
            else arr[i][0]=1;
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(obstacleGrid[i][j]==1)continue;
                arr[i][j]=arr[i-1][j]+arr[i][j-1];
            }
        }
        return arr[n-1][m-1];
    }
};