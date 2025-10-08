class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double x=0;
        int i=0,j=0;
        double ans=0;
        while(j<k){
            ans+=nums[j];
            j++;
        }
        // cout<<ans<<endl;
        x=(double)(ans*1.0/k);
        // cout<<x<<endl;
        while(j<nums.size()){
            ans-=nums[i];
            i++;
            ans+=nums[j];
            x=max(x,(double)(ans*1.0/k));
            // cout<<(double)(ans*1.0/k)<<endl;
            j++;
        }
        return x;


    }
};