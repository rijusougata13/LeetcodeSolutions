class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0,cnt=0;
        for(auto x:nums){
            if(x==0)cnt++;
            else cnt=0;

            ans+=cnt;
        }
        return ans;
    }
};
