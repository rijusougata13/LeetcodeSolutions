class Solution {
public:
    string reverseVowels(string s) {
        vector<char>vow;
        vector<int>ind;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='i' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='I' || s[i]=='E' || s[i]=='O' || s[i]=='U'){
                vow.push_back(s[i]);
                ind.push_back(i);
            }
        }
        reverse(vow.begin(),vow.end());
        for(int i=0;i<vow.size();i++){
            s[ind[i]]=vow[i];
        }
        return s;
    }
};