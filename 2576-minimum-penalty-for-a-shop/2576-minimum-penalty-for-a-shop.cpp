class Solution {
public:
    int bestClosingTime(string customers) {
        int cnt=0;
        for(auto x:customers)if(x=='Y')cnt++;
        int mx=cnt,time=0;
        for(int i=0;i<customers.size();i++){
            if(customers[i]=='Y'){
                cnt-=1;
                if(cnt<mx){
                    mx=cnt;
                    time=i+1;
                }
            }else{
                cnt+=1;
            }
        }
        return time;
    }
};