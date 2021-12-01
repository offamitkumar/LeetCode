class Solution {
    char getChar(const char &c1, const char &c2) {
        for (int i=0; i<26; ++i) {
            const char &ch = char(i+'a'); 
            if (ch != c1 && ch != c2) {
                return ch; 
            }
        }
        return 'a'; 
    }
public:
    string modifyString(string s) {
        if (s.size() == 1) {
            if (s[0] == '?') {
                s[0] = getChar('a','a'); 
            }
            return s; 
        }
        const int&n = s.size(); 
        for (int i=0; i<n; ++i) {
            if (s[i] == '?') {
                if (i == 0) {
                    s[i] = getChar(s[i+1], s[i+1]); 
                } else if (i==n-1) {
                    s[i] = getChar(s[i-1], s[i-1]); 
                } else {
                    s[i] = getChar(s[i+1], s[i-1]); 
                }
            }
        }
        return s; 
    }
};
