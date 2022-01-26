// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        int ans=0,flg=0;
        for(auto x:str){
            if(x>='0' and x<='9'){
            
            int p=x-'0';
            ans*=10;
            ans+=p;
            }
            else if(x=='-'){
                flg=1;
            }
            else return -1;        
        }
        if(flg)ans*=-1;
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
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends