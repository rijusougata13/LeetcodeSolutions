// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=0;
        for(int i=0;i<N;i++)sum+=arr[i];
        if(sum&1)return 0;
        sum/=2;
        int dp[N+1][sum+1];
        memset(dp,0,sizeof(dp));
        dp[0][0]=1;
        for(int i=0;i<N+1;i++)dp[i][0]=1;
        for(int i=1;i<N+1;i++){
            for(int j=1;j<=sum;j++){
                if(arr[i-1]<=j){
                    if(dp[i-1][j-arr[i-1]] or dp[i-1][j])dp[i][j]=1;
                    else dp[i][j]=0;
                }
            }
        }
        // for(int i=0;i<N+1;i++){
        //     for(int j=0;j<sum+1;j++)cout<<dp[i][j]<<" ";
        //     cout<<endl;
        // }
        return dp[N][sum];
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends