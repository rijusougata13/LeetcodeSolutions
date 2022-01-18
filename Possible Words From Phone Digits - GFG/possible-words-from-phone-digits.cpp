// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    vector<string>ans;
    vector<string>arr;
    void test(string s,int i,int n){
        if(i==n){
            ans.push_back(s);
            return;
        }
        string p=arr[i];
        for(int j=0;j<p.size();j++){
            test(s+p[j],i+1,n);
        }
        
    }
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int N)
    {
        vector<string>brr;
        //Your code here
        brr.push_back("abc");
        brr.push_back("def");
        brr.push_back("ghi");
        brr.push_back("jkl");
        brr.push_back("mno");
        brr.push_back("pqrs");
        brr.push_back("tuv");
        brr.push_back("wxyz");
        for(int i=0;i<N;i++)arr.push_back(brr[a[i]-2]);
        string s="";
        test(s,0,N);
        return ans;
        
    }
};


// { Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}  // } Driver Code Ends