// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


 // } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    vector<string>ans;
    void test(string s,int l,int r){
        if(l==0 and r==0){
            ans.push_back(s);
            return;
        }
        if(l>0){
            test(s+'(',l-1,r);
        }
        if(r>l)test(s+')',l,r-1);
        
    }
    vector<string> AllParenthesis(int n) 
    {
        string s="";
        test(s,n,n);
        // Your code goes here 
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
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 
  // } Driver Code Ends