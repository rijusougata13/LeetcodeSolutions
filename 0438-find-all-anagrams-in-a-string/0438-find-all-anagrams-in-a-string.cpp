class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int sz=p.size();
        map<char,int>mpp,mpp2;
        int j=0;
        for(j;j<(sz);j++){
            mpp[s[j]]++;
        }

        for(auto x:p)mpp2[x]++;

        int i=0;
        vector<int>ans;
        j--;
        
        while(j<s.size()){
           
        
           
            if(mpp==mpp2)ans.push_back(i);
            i++;
            j++;
            if(j<s.size()){
                
                mpp[s[i-1]]--;
                mpp[s[j]]++;
                if(mpp[s[i-1]]==0)mpp.erase(s[i-1]);
            }
        }
        return ans;

    }
};