class Solution {
    bool is_char(char ch) {
        if (ch<='z' && ch>='a') {
            return true;
        }
        if (ch<='Z' && ch>='A') {
            return true;
        }
        return false;
    }
public:
    string reverseOnlyLetters(string s) {
        int i=0 , j=s.length()-1; 
        while (i < j) {
            if (!is_char(s[i])) {
                ++i; 
            } else if (!is_char(s[j])) {
                --j;
            } else {
                swap(s[i],s[j]); 
                ++i; 
                --j;
            }
        }
        return s; 
    }
};
