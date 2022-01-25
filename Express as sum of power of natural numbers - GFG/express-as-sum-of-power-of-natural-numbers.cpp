// { Driver Code Starts
// Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    long long dp[1001][1001];
        long long mod=1e9+7;
        
    long long solve(int n,int x,int i){
        if(n==0)return 1;
        if(i>n){
            return 0;
        }
        if(dp[n][i]!=-1){
            return dp[n][i];
        }
        int pa=pow(i,x);
        if(pa<=n){
            dp[n][i]=(solve(n-pa,x,i+1)%mod+solve(n,x,i+1)%mod)%mod;
        }
        else dp[n][i]=0;
        
        return dp[n][i];
    }
    int numOfWays(int n, int x)
    {
        memset(dp,-1,sizeof(dp));
        return solve(n,x,1);
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  n, x;
        cin >> n >> x;
        Solution ob;
        cout<<ob.numOfWays(n, x)<<endl;
    }
    return 0;
}
  // } Driver Code Ends