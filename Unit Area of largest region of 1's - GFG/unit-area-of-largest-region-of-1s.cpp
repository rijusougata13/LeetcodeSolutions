// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    int test(vector<vector<int>>&grid,int i,int j){
        
        if(i>=grid.size() or i<0 or j>=grid[0].size() or j<0)return 0;
        if(grid[i][j]==0)return 0;
        grid[i][j]=0;
        return 1+test(grid,i-1,j-1)+test(grid,i-1,j)+test(grid,i-1,j+1)+test(grid,i,j+1)+test(grid,i+1,j+1)+test(grid,i+1,j)+test(grid,i+1,j-1)+test(grid,i,j-1);
        
    }
    //Function to find unit area of the largest region of 1s.
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        int n=grid.size(),m=grid[0].size(),mx=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                        int ans=test(grid,i,j);
                        mx=max(mx,ans);

                }
            }
        }
        return mx;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends