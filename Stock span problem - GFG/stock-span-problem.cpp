// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       stack<pair<int,int>>s;
       int curr=0;
       vector<int>ans;
       for(int i=0;i<n;i++){
           if(s.empty()){
               curr=1;
               ans.push_back(1);
               s.push({price[i],1});
           }
           else{
              int tot=1;
              while(!s.empty() and s.top().first<=price[i]){
                  tot+=s.top().second;
                  s.pop();
                  
              }
              ans.push_back(tot);
              s.push({price[i],tot});
           }
       }
       return ans;
    }
};



// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends