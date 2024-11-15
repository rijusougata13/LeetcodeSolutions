class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        int cnt=0;
        
        unordered_set<string>s;
        for(auto x:wordList)s.insert(x);

        queue<string>q;
        q.push(beginWord);
        if(beginWord==endWord)return 0;
        cnt=1;
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){

                string p=q.front();
                q.pop();

                if(p==endWord)return cnt;
                s.erase(p);

                for(int j=0;j<p.size();j++){
                    char c=p[j];

                    for(int k=0;k<26;k++){
                        p[j]='a'+k;
                        if(s.find(p)!=s.end()){
                            q.push(p);
                        }
                        p[j]=c;
                    }
                }
            }
            cnt++;
        }
        return 0;
    }
};