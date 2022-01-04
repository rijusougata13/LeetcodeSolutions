// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long  latest=-1,ans=0,mul=1,cnt=1,flg=1;
        for(int i=0;i<n;i++){
            if(i==0 or flg==0)cnt=1,latest=i-1;
            else cnt=cnt/a[i-1];
            int j=latest+1;
            for(j=latest+1;j<n;j++){
                if((cnt*a[j])<k){
                    mul*=a[j];
                    cnt*=a[j];
                }
                else break;
            }
            j--;
            
            if(j<i){flg=0;continue;}
            latest=j;
            ans+=(j-i+1);
            flg=1;
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends