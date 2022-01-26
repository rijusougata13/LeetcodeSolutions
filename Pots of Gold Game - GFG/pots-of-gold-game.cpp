// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    int dp[501][501];
    int test(int i,int j,vector<int>&A){
        if(dp[i][j]!=-1)return dp[i][j];
        if(i>j)return dp[i][j]= 0;
        if(i==j)return dp[i][j]= A[i];
        int left=A[i]+min(test(i+1,j-1,A),test(i+2,j,A));
        int right=A[j]+min(test(i+1,j-1,A),test(i,j-2,A));
        return dp[i][j]=max(left,right);
        
    }
    int maxCoins(vector<int>&A,int n)
    {
        memset(dp,-1,sizeof(dp));
        return test(0,A.size()-1,A);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int>A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution ob;
        cout << ob.maxCoins(A, N) << "\n";
    }
    return 0;
}
  // } Driver Code Ends