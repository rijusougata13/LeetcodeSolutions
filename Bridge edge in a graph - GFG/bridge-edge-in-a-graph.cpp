// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	void dfs(vector<int>adj[],int u,int v,vector<int>&vis,int i){
	 
	        vis[i]=1;
	        for(auto x:adj[i]){
	                if(i==u and x==v)continue;
	                if(!vis[x])
	                dfs(adj,u,v,vis,x);
	        }
	   
	}
    //Function to find if the given edge is a bridge in graph.
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        vector<int>vis(V+1,0);
        dfs(adj,c,d,vis,c);
        if(vis[d]==0)
        return 1;
        else return 0;
    }
};

// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        int i=0;
        while (i++<E) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back (v);
            adj[v].push_back (u);
        }
        
        int c,d;
        cin>>c>>d;
        
        Solution obj;
    	cout << obj.isBridge(V, adj, c, d) << "\n";
    }

    return 0;
}

  // } Driver Code Ends