class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int target=-nums[i];

            int j=i+1,k=nums.size()-1;
            while(j<k){
                int val=(nums[j]+nums[k]);
                if(val<target){
                    j++;
                }
                else if(val>target)k--;
                else{
                    vector<int>prp={nums[i],nums[j],nums[k]};
                    ans.push_back(prp);
                    while(j<k && nums[j]==prp[1])j++;
                    while(j<k && nums[k]==prp[2])k--;
                }
            }

            while((i+1)<nums.size() && (nums[i]==nums[i+1]))i++;

        }
        return ans;
    }
};