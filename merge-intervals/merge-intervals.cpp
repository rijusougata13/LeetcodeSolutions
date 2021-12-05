class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
       sort(arr.begin(),arr.end(),[](vector<int>a,vector<int>b){
           return a[0]<b[0];
       }) ;  
        int n=arr.size();
        vector<vector<int>>ans;
        int start=arr[0][0],end=arr[0][1];
        for(int i=1;i<n;i++){
            if(arr[i][0]<=end ){
                end=max(arr[i][1],end);
            }
            else{
                vector<int>a;
                a.push_back(start);
                a.push_back(end);
                ans.push_back(a);
                start=arr[i][0];
                end=arr[i][1];
            }
        }
        vector<int>a;
                a.push_back(start);
                a.push_back(end);
                ans.push_back(a);
    
        return ans;
    }
};