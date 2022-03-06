class Solution {
public:
    string removeDuplicateLetters(string ss) {
        vector<int>cnt(30,0),visited(30,0);
        for(auto x:ss){
            cnt[x-'a']++;
        }
        stack<char>s;
        for(auto x:ss){
            cnt[x-'a']--;
            if(visited[x-'a'])continue;
            while(!s.empty() and (x<s.top()) and (cnt[s.top()-'a']!=0)){
                visited[s.top()-'a']=0;
                s.pop();
            
            }
            s.push(x);
            visited[x-'a']=1;
            
        }
        string ans="";
        while(!s.empty()){
            ans+=s.top();
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};