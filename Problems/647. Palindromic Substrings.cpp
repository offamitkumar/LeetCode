class Solution {
public:
    int countSubstrings(string s) {
        int ans{}; 
        for (int i=0; i<s.size(); ++i) {
            int j=i, k =i; 
            while (j>=0 && k<s.size() && s[j] == s[k]) {
                ans++;
                --j; 
                ++k; 
            }
            j = i-1, k=i; 
            while (j>=0 && k<s.size() && s[j] == s[k]) {
                ans++;
                --j; 
                ++k; 
            }
        }
        return ans; 
    }
};
