class Solution {
public:
    string reverseWords(string s) {
        stringstream st(s); 
        string res{}; 
        while (st >> s) {
            reverse(s.begin(), s.end()); 
            if ( !res.empty()) {
                res+=' '; 
            }
            res += s; 
        }
        return res; 
    }
};
