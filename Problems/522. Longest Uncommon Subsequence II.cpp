class Solution {
    bool check(const string&s , const string &t) {
        int i=0,j=0; 
        while (i<s.size() && j<t.size()) {
            if (s[i] == t[j]) {
                ++i;
            }
            ++j; 
        }
        return i==s.size(); 
    }
public:
    int findLUSlength(vector<string>& strs) {
        int ans{-1}; 
        for (int i=0; i<strs.size(); ++i) {
            bool okay =true; 
            for (int j=0; j<strs.size(); ++j){
                if (i^j && check(strs[i], strs[j])) {
                    okay =false; 
                    break; 
                }
            }
            if (okay)
                ans = max(ans,(int)strs[i].size()); 
        }
        return ans; 
    }
};
