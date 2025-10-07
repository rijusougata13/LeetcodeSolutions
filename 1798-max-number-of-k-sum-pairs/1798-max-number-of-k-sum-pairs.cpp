class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        map<int,int>mpp;
        for(auto x:nums){
            mpp[x]++;
        }
        int cnt=0;
        for(auto x:nums){
            if(mpp[x]>0){
            int y=k-x;
                if(mpp.find(y)!=mpp.end()){
                    if(y==x and mpp[y]>1){
                    mpp[y]--;
                    mpp[x]--;
                    cnt++;
                    }
                    else if(y!=x and mpp[y]>0){

                    mpp[y]--;
                    mpp[x]--;
                    cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};