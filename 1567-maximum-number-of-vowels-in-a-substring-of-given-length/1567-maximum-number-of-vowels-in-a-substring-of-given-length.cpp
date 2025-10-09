class Solution {
public:
    int maxVowels(string s, int k) {
        int cnt=0,mx=0;
        int i=0,j=0;
        while(j<k){
            if(s[j]=='a' or s[j]=='e' or s[j]=='i' or s[j]=='o' or s[j]=='u'){
                cnt++;
            }
            j++;
        }
        mx=cnt;
        while(j<s.size()){
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u') cnt--;
            i++;
            if(s[j]=='a' or s[j]=='e' or s[j]=='i' or s[j]=='o' or s[j]=='u') cnt++;
            j++;
            mx=max(mx,cnt);
        }
        return mx;
    }
};