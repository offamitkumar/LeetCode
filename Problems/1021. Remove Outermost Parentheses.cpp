class Solution {
public:
    string removeOuterParentheses(string s) {
        string res{}; 
        const int&n = s.length(); 
        stack<char>st;
        int i=0; 
        while (i<n) {
            if(st.empty()) {
                st.push(s[i]); 
            } else {
                if (s[i] == '(') {
                    res+=s[i]; 
                    st.push(s[i]); 
                } else {
                    st.pop(); 
                    if (!st.empty()) {
                        res+=s[i];
                    }
                }
            }
            ++i; 
        }
        return res; 
    }
};
