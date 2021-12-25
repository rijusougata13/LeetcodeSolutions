class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<nums.size();i++){
            int target=-nums[i];
            int start=i+1;
            int end=nums.size()-1;
            while(start<end){
                int sum=(nums[start]+nums[end]);
                if(sum<target){
                    start++;
                
                }
                else if(sum>target)end--;
                else {
                    vector<int>trp={nums[i],nums[start],nums[end]};
                    ans.push_back(trp);
                    while(start<end and nums[start]==trp[1]){
                        start++;
                    }
                    while(start<end and nums[end]==trp[2]){
                    end--;
                    }
                }
            }
            while((i+1)<nums.size() and nums[i]==nums[i+1])i++;
        }
        return ans;
    }
};