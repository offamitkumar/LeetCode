class Solution {
    map<string , int>dp;
public:
    bool isScramble(string s1, string s2) {
        if (s1 == s2) {
            return true;
        }
        if (s1.size() ==0 || s2.size()==0) {
            return false;
        }
        string key=s1+' '+s2;
        if (dp.find(key)!=dp.end()){
            return dp[key];
        }
        int n = s1.size();
        for(int i=1; i<=n-1; ++i) {
            // great ,great 
            if (isScramble(s1.substr(0 , i) , s2.substr(n-i,i)) && isScramble(s1.substr(i,n-i) , s2.substr(0,n-i))) {
                dp[key]=true;
                return true;
            } else if (isScramble(s1.substr(0 , i) , s2.substr(0,i)) && isScramble(s1.substr(i,n-i) , s2.substr(i,n-i))){
                dp[key]=true;
                return true;
            }
        }
        dp[key]=false;
        return false;
    }
};
