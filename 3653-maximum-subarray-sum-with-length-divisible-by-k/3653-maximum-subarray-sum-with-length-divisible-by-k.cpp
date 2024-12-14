class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {




        vector<long long>pr(1,0);
        for(int i=0;i<nums.size();i++){
            pr.push_back(nums[i]+pr.back());
        }

        long long res=LLONG_MIN;
        for(int i=0;i<k;i++){
            long long sum=0;
            for(int j=i;j+k<=nums.size();j+=k){
                long long x=pr[j+k]-pr[j];
                sum=max(x,sum+x);
                res=max(res,sum);
            }
        }
        return res;
    }
};
