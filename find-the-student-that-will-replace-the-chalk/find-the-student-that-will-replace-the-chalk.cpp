class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long tot=0;
        for(auto x:chalk)tot+=x;
        k%=tot;
        for(int i=0;i<chalk.size();i++){
            if(chalk[i]>k)return i;
            k-=chalk[i];
        }
        return 0;
    }
};