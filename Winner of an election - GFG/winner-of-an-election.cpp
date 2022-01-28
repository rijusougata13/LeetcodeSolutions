// { Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        map<string,int>mpp;
        int mx=0;
        for(int i=0;i<n;i++)mpp[arr[i]]++,mx=max(mx,mpp[arr[i]]);
        vector<string>ans;
        for(auto x:mpp){
            if(x.second==mx)ans.push_back(x.first);
            
        }
        sort(ans.begin(),ans.end());
        vector<string>a;
        string p=ans[0];
        ans.clear();
        ans.push_back(p);
        ans.push_back(to_string(mx));
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}
  // } Driver Code Ends