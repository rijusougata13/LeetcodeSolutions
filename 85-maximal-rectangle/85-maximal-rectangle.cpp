class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.size()==0)return 0;
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>height(m+1,0);
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='0'){
                        height[j]=0;
                    continue;
                }
                height[j]++;
                for(int pre=j-1,curr=height[j];pre>=0;pre--){
                    if(height[pre]==0)break;
                    curr=min(height[pre],curr);
                    ans=max(ans,(j-pre+1)*curr);
                    
                }
                ans=max(ans,height[j]);
            }
        }
        return ans;
    }
};