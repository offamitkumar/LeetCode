class Solution {
public:
    string removeOuterParentheses(string s) {
        string res{}; 
        const int&n = s.length(); 
        int counter{}; 
        for (int i=0; i<n; ++i) {
            if (s[i] == ')') {
                if (--counter) {
                    res+=s[i]; 
                }
            } else {
                if (counter++) {
                    res+=s[i]; 
                }
            }
        }
        return res; 
    }
};
