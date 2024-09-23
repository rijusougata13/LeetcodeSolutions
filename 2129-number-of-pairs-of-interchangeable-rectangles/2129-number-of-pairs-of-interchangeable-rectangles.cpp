class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        map<double, int>mpp;
        for(auto x:rectangles){
            // cout<<x[0]<<" "<<x[1]<<(float)(x[0]/x[1]);
            mpp[(double)((double)x[0]/x[1])]++;
        }
        long long ans=0;
        for(auto x:mpp){
            // cout<<x.first<<endl;
            long long n=x.second;
            n--;
            ans+=(long long)(n*(n+1))/2;
        }
        return ans;
    }
};

