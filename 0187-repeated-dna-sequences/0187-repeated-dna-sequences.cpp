class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        map<string,int>mpp;
        int i=0,j=0;
        if(s.size()<10)return vector<string>{};
        string ss="";
        for(;j<10;j++){
            ss+=s[j];
        }

        mpp[ss]+=1;
        
        // cout<<ss<<endl;
        while(j<s.size()){
            ss.erase(ss.begin());
            ss+=s[j++];
                    // cout<<j-1<<" "<<ss<<endl;

            mpp[ss]+=1;
        }
        vector<string>ans;
        for(auto x:mpp){
            // cout<<x.first<<" "<<x.second<<endl;
            if(x.second>1)ans.push_back(x.first);
        }
        return ans;
    }
};