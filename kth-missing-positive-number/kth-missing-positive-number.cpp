class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>brr;
        int last=0, cnt=0;
        for(auto x:arr){
            int p=cnt;
            p+=(x-last-1);
            if(p>=k){
                while(true){
                    cnt++;
                    last++;
                    if(cnt==k)return last;
                    
                }
            }
            else{
                cnt=p;
                last=x;
            }
        }
                while(true){
                    cnt++;
                    last++;
                    if(cnt==k)return last;
                    
                }
        
    }
};