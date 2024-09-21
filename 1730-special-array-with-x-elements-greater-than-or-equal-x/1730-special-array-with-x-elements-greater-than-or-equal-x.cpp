class Solution {
public:
    int specialArray(vector<int>& nums) {
        // unordered_map<int,int>mpp;
        // for(auto x:nums)mpp[x]++;
        // for(auto x:mpp){
        //     if(x.first>=x.second)return x.second;
        // }
        // return -1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int sz=nums.size()-i;
            if(sz<=nums[i]){
                if(i==0)
                return sz;
                else{
                    if(nums[i-1]<sz)return sz;
                }
            }
        }
        return -1;

    }
};