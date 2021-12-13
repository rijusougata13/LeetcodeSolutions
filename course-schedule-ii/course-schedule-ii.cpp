class Solution {
public:
    vector<int>ans;
    map<int,int>mpp;
    bool test(int curr,int prev,vector<int>arr[],vector<int>&vis){
       // if(curr==prev)return false;
        if(vis[curr]==1)return false;
        if(vis[curr]==-1)return true;
        vis[curr]=1;
        
        for(auto x:arr[curr]){
            // if(x==prev)return false;
           if(!test(x,curr,arr,vis))return false;
        }
        vis[curr]=-1;
        
        if(mpp.count(curr)==0)
        ans.push_back(curr);
        return true;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
         int n=numCourses;
        vector<int>arr[n+5];
        for(int i=0;i<prerequisites.size();i++){
            arr[prerequisites[i][0]].push_back(prerequisites[i][1]);
            
        }
        
        vector<int>vis(n+1,0);
        for(int i=0;i<n;i++){
           if (!test(i,-1,arr,vis)){
               ans.clear();
               return ans;
           }
            vis.resize(n+1,0);
        }
        return ans;
    }
};