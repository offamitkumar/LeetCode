class Solution {
    bool okay(char ch) {
        if (ch >='a' && ch <='z') {
            return true; 
        }
        if (ch>='A' && ch <='Z') {
            return true; 
        }
        if (ch>='0' && ch <='9') {
            return true; 
        }
        return false; 
    }
public:
    bool isPalindrome(string s) {
        int l =0 , r = s.size()-1; 
        while (l < r) {
            if (!okay(s[l])) {
                l++; 
            } else if (!okay(s[r])) {
                r--; 
            } else {
                if (char(tolower(s[l])) != char(tolower(s[r]))) {
                    return false; 
                }
                l++; 
                r--; 
            }
        }
        return true; 
    }
};
