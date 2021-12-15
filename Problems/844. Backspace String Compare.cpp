class Solution {
    string parse(const string&s) {
        string res{}; 
        int b_counter = 0; 
        const int&n = s.size();
        for(int i=n-1; i>=0; --i) {
            if (s[i] == '#') {
                b_counter++; 
            } else {
                if (b_counter == 0)
                    res += s[i]; 
                else 
                    b_counter--; 
            }
        }
        return res; 
    }
public:
    bool backspaceCompare(string s, string t) {
        return parse(s) == parse(t); 
    }
};
