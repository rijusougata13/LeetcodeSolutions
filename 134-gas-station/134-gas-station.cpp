class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tot=0,curr=0,start=0;
        for(int i=0;i<gas.size();i++){
            tot+=gas[i]-cost[i];
            curr+=gas[i]-cost[i];
            if(curr<0){
                curr=0;
                start=i+1;
            }
        }
        if(tot<0)return -1;
        return start;
    }
};