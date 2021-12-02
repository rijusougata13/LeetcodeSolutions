class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)sum+=nums[i];
        if(sum&1)return 0;
        sum/=2;
        
        vector<vector<int>>arr(nums.size()+10,vector<int>((sum)+10,0));
        for(int i=0;i<=nums.size();i++){
            arr[i][0]=1;
        }
        for(int i=1;i<=nums.size();i++){
            for(int j=1;j<=sum;j++){
                if(nums[i-1]<=j){
                    arr[i][j]=arr[i-1][j-nums[i-1]] || arr[i-1][j];
                }
                else arr[i][j]=arr[i-1][j];
            }
        }
        return arr[nums.size()][sum];
    }
};
      