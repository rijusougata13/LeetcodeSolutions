class Solution {
public:
    
    int cnt,empty=1;
    bool test(vector<vector<int>>&arr,vector<vector<int>>grid,int i,int j,int x,int y){
        int n=arr.size(),m=arr[0].size();
        if(i<0 or j<0 or i>=n or j>=m)return false;
        if(grid[i][j]==-1)return false;
        if(arr[i][j]!=0)return false;
        if(i==x and j==y ){
            if(empty==0){
            cnt++;
            return true;
            }
            return false;
        }
        
        arr[i][j]=1;
        empty--;
        bool flg=0;
       flg|= test(arr,grid,i-1,j,x,y);
       flg|= test(arr,grid,i+1,j,x,y);
       flg|= test(arr,grid,i,j-1,x,y);
       flg|= test(arr,grid,i,j+1,x,y);
        // if(!flg)
        arr[i][j]=0;empty++;
        // for(int i=0;i<arr.size();i++){
        //     for(int j=0;j<arr[0].size();j++)cout<<arr[i][j];
        //     cout<<endl;
        // }
        // cout<<endl;
        return false;
        
    }
    
    int uniquePathsIII(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>arr(n,vector<int>(m,0));
        cnt=0;
        int x=0,y=0,a=0,b=0;
        for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[0].size();j++){
            if(grid[i][j]==1){
                a=i,b=j;
            }
            if(grid[i][j]==2){
                x=i,y=j;
            }
            if(grid[i][j]==0)empty++;
        }
            }
        test(arr,grid,a,b,x,y);
        return cnt;
    }
};