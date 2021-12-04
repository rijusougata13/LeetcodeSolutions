class Solution {
public:
    bool isThree(int n) {
        // if((sqrt(n))*(sqrt(n))!=n)return false;
        int x=sqrt(n);
        if(n==1 or n==2)return false;
        if((x*x)!=n)return false;
        for(int i=2;i*i<=x;i++){
            if(x%i==0)return false;
        }
        return true;
    }
};