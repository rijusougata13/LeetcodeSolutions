
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;

        map<string,vector<string>>mpp;
        for(int i=0;i<strs.size();i++){
            string x=strs[i];
            sort(x.begin(),x.end());
            mpp[x].push_back(strs[i]);
        }
      

        for(auto x:mpp){
            ans.push_back(x.second);
        }

        return ans;

    }
};

