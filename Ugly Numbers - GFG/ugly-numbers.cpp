// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    int j=1;
	    ull dp[10001]={0};
	   // priority_queue<ull,vector<ull>,greater<ull>>pq;
        set<ull>pq;
	    pq.insert(1);
	   //map<ull,int>mpp;
	   //mpp[1]++;
	   n--;
	    while(n){
	        ull p=*pq.begin();
	       // pq.pop();
	       auto t=pq.begin();
	       pq.erase(t);
	       // if(mpp.count(2*p)==0)
	        pq.insert(2*p);
	       // if(mpp.count(3*p)==0)
	        pq.insert(3*p);
	        pq.insert(5*p);
	        n--;
	    }
	    return *pq.begin();
	   // return dp[n];
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends