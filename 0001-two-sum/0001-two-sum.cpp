class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      map<int,vector<int>>mpp;
      for(int i=0;i<nums.size();i++){
        mpp[nums[i]].push_back(i);
      }

      vector<int>ans;
      for(auto x:mpp){
        auto p =mpp.find(target-x.first);
        if(p!=mpp.end()){
            ans.push_back(x.second[0]);
            ans.push_back(mpp[target-x.first].back());
            return ans;
        }
      }
      return ans;
    }
};