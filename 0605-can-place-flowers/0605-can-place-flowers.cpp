class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int cnt=0;
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i]==0){
                if(i>0 and flowerbed[i-1]==1)flowerbed[i]=-1;
                else if(i<flowerbed.size()-1 and flowerbed[i+1]==1)flowerbed[i]=-1;
                
            }
           
        }
        // for(auto x:flowerbed)cout<<x<<" ";
        // cout<<endl;
int ans=0;
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i]==0)cnt++;
            else {
                ans+=(cnt/2)+(cnt%2);
                cnt=0;
            }
        }
        ans+=(cnt/2)+(cnt%2);
        // cout<<ans<<endl;
         if(ans>=n)return true;
            return false;
    }
};