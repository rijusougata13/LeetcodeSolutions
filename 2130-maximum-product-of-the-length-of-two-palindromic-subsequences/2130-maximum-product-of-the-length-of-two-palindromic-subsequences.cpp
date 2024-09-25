class Solution {
public:
    int result=0;
    bool pal(string a){
        int i=0,j=a.size()-1;
        while(i<=j){
            if(a[i]!=a[j])return false;
            i++;
            j--;
        }
        return true;
    }

    void dfs(string s, int i, string& a, string& b){
        // cout<<a<<" "<<b<<endl;
        if(i>=s.size()){
            if(pal(a) and pal(b))
            result=max(result, (int)(a.size()*b.size()));
            return;
        }
        a.push_back(s[i]);
        dfs(s,i+1,a,b);
        a.pop_back();

        b.push_back(s[i]);
        dfs(s,i+1,a,b);
        b.pop_back();


        dfs(s,i+1,a,b);
    }
    int maxProduct(string s) {
        string a="",b="";
        dfs(s,0,a,b);
        return result;
    }
};