// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

bool isSubSequence(vector<int> &v1, vector<int> &v2, int n, int m) {

    if (m == 0) return true;
    if (n == 0) return false;

    if (v1[n - 1] == v2[m - 1]) return isSubSequence(v1, v2, n - 1, m - 1);

    return isSubSequence(v1, v2, n - 1, m);
}


 // } Driver Code Ends
/*The function returns a vector containing the
increasing sub-sequence of length 3 if present
else returns an empty vector */
class Solution{
  public:
    vector<int> find3Numbers(vector<int> arr, int N) {
        // Your code here
        
        int mn=0;
        vector<int>ans;
        if(N<3)return ans;
        vector<int>small(N,0),big(N,0);
        small[0]=-1;
        big[N-1]=-1;
        for(int i=1;i<N;i++){
            if(arr[i]<=arr[mn]){
                small[i]=-1;
                mn=i;
            }
            else{
                small[i]=mn;
            }
        }
        
        mn=N-1;
        
        for(int i=N-2;i>=0;i--){
            if(arr[i]>=arr[mn]){
                big[i]=-1;
                mn=i;
            }
            else big[i]=mn;
        }
        // for(int i=0;i<N;i++){
        //     cout<<small[i]<<" "<<big[i]<<endl;
        // }
        for(int i=1;i<N-1;i++){
            if(small[i]!=-1 and big[i]!=-1){
                ans.push_back(arr[small[i]]);
                ans.push_back(arr[i]);
                ans.push_back(arr[big[i]]);
                break;
            }
        }
        // for(auto x:ans)cout<<x<<" ";
        // cout<<endl;
        return ans;
    }
};

// { Driver Code Starts.

// Driver program to test above function
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        auto res = obj.find3Numbers(a, n);

        // wrong format output
        if (!res.empty() and res.size() != 3) {
            cout << -1 << "\n";
        }

        if (res.empty()) {
            cout << 0 << "\n";
        } else if ((res[0] < res[1] and res[1] < res[2]) and
                   isSubSequence(a, res, n, res.size())) {
            cout << 1 << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}  // } Driver Code Ends