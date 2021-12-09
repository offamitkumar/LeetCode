class Solution {
    set<string>dict; 
    vector<int>dp; 
    bool bruteforce(const string&s , int index , vector<string>&wordDict) {
        if (index >= s.length()) {
            return true; 
        }
        if (dp[index] != -1){ 
            return dp[index]; 
        }
        bool res = false; 
        for (auto&itr:wordDict) {
            if (s[index] != itr[0]) continue; 
            if (s.substr(index,itr.length()) == itr) {
                res = bruteforce(s, index+itr.length(),wordDict);  
            }
            if (res) return dp[index] = true; 
        }
        return dp[index] = false; 
    }
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        dp.resize(310, -1); 
        return bruteforce(s, 0, wordDict); 
    }
};
