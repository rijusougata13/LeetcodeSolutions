class Solution {
public:
   int **table;
    int getMoneyAmount(int n) {
        table = new int *[n+1];
        for(int i=0;i<n+1;i++){
            table[i]=new int[n+1];
        }
        for(int i=0;i<n+1;i++){
            for(int j=0;j<n+1;j++){
                table[i][j]=-1;
            }
        }
        // return 1;
        return DP(1, n);

    }
     int DP( int s, int e){
        if(s>=e)return 0;
        if(table[s][e]!=-1)return table[s][e];
        int mx=INT_MAX;
         for(int i=s;i<=e;i++){
            mx=min(mx,i+max(DP(s,i-1),DP(i+1,e)));
         }
         return table[s][e]=mx;
     }
};