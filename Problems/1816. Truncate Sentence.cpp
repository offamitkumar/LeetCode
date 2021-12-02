class Solution {
public:
    string truncateSentence(string s, int k) {
        const int&n = s.size(); 
        for(int i=0; i <n; ++i) {
            if (s[i] == ' ') {
                k--; 
            }
            if (k==0) {
                return s.substr(0, i); 
            }
        }
        return s; 
    }
};
