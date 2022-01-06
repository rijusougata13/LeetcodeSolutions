class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n=str1.size(),m=str2.size();
        vector<int>cnt;
        for(int i=1;i<=n;i++){
            if(n%i==0 and m%i==0){
                cnt.push_back(i);
            }
        }
        string anss="";
        for(auto x:cnt){
            int p=(n/x),q=(m/x);
            string s="",r="";
                string ans=str1.substr(0,x);

            while(p--){
                s+=ans;
            }
            while(q--){
                r+=ans;
            }
            // string s=std::string(p,str1.substr(0,x));
            // string r=string(q,str1.substr(0,x));
            if(s==str1 and r==str2){
                
                anss=ans;
            }
            
        }
        return anss;
    }
};