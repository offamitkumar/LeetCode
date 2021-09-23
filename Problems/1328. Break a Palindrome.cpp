class Solution {
public:
    string breakPalindrome(string s) {
        if (s.size() == 1) {
            return ""; 
        }
        const int &n = s.size();
        for (int i=0; i<n; ++i) {
            if (s[i] != 'a' && i!=n/2) {
                s[i] = 'a';
                return s; 
            }
        }
        s[n-1]='b'; 
        return s; 
    }
};
