class Solution {
public:
    int countPalindromicSubsequence(string s) {
        set<char>ans;
        vector<int>start(30,INT_MAX),end(30,0);
        for(int i=0;i<s.size();i++){
            start[s[i]-'a']=min(start[s[i]-'a'],i);
            end[s[i]-'a']=i;
        }

        int sz=0;

        for(int c=0;c<26;c++){
            if(start[c]<end[c]){
                ans.clear();
                for(int p=start[c]+1;p<end[c];p++){
                    ans.insert(s[p]);
                }
                sz+=ans.size();
            }
        }

        return sz;
    }
};