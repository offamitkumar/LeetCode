class Solution {
public:
    string freqAlphabets(string s) {
        string ans="";
        int n = s.size();
        s = s+"%%";
        for(int i=0;i<n;){
            cout<<"processing "<<s[i]<<endl;
            if(s[i+2]=='#'){
                int x = (s[i]-'0');x*=10;
                x+=(s[i+1]-'0');
                ans+=(x+'a'-1);
                i+=3;
            }else{
                int x= (s[i]-'0');
                ans+=(x+'a'-1);
                i++;
            }
        }
        return ans;
    }
};
