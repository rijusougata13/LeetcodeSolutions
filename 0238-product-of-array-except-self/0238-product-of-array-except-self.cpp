class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        vector<int>left(n,0),right(n,0);


        int l=1,r=1;
        for(int i=0;i<nums.size();i++){
            left[i]=l*nums[i];
            l=left[i];
        }

        for(int i=nums.size()-1;i>=0;i--){
            right[i]=r*nums[i];
            r=right[i];
        }



        for(int i=0;i<nums.size();i++){

            if(i==0) ans[i]=right[i+1];
            else if(i==nums.size()-1)ans[i]=left[i-1];
            else 
            ans[i]=(left[i-1]*right[i+1]);
        }

        return ans;

    }
};




// int prod=1;
//         for(int i=0;i<nums.size();i++){
//            prod*=nums[i];
//         }
         
//         vector<int>ans;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==0)ans.push_back(prod);
//             else
//              ans.push_back(prod/nums[i]);
//         }

//         return ans;