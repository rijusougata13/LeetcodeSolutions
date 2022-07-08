class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int cnt=0,n=grid.size(),m=grid[0].size();
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1)cnt++;
                if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        
        
        int ans=-1;
        int x[4]={0,1,-1,0};
        int y[4]={1,0,0,-1};
         vector<int> dir={-1,0,1,0,-1}; 
        while(q.size()>0){
            
            queue<pair<int,int>>pq;
            int sz=q.size();
            while(sz--){
                pair<int,int>a=q.front();
                q.pop();
                for(int i=0;i<4;i++){
                    
                    int r=a.first+dir[i];
                    int c=a.second+dir[i+1];
                    
                        if(r>=0 and r<n and c>=0 and c<m and grid[r][c]==1){
                            cnt--;
                            grid[r][c]=2;
                            q.push({r,c});
                            cout<<r<<" "<<c<<endl;
                        }
                    
                }
            }
            
           
            ans++;
        }
        
        
        if(cnt>0)return -1;
        if(ans==-1)ans=0;
        return ans;
    }
};