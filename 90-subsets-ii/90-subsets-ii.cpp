class Solution {
public:
    set<vector<int>>s;
    void test(vector<int>&nums,vector<int>arr,int ind){
        if(ind>=nums.size())return;
        // for(auto x:arr)cout<<x<<" ";
        // cout<<endl;
        // arr.push_back(nums[ind]);
        sort(arr.begin(),arr.end());
        s.insert(arr);
        
        test(nums,arr,ind+1);
        arr.push_back(nums[ind]);
        test(nums,arr,ind+1);
        
        sort(arr.begin(),arr.end());
        s.insert(arr);
        
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
      vector<int>arr;
        vector<vector<int>>ans;
        test(nums,arr,0);
        for(auto x:s){
            // for(auto y:x)cout<<y<<" ";
            ans.push_back(x);
            // cout<<endl;
        }
        return ans;
    }
};