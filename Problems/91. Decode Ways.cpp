class Solution {
public:
    int numDecodings(string s) {
        if (s.size() == 0 || s[0] == '0') return 0;
        if (s.size() == 1) return 1; 
        const int&len = s.size(); 
        int pre1{1}, pre2{1}; 
        for (int i=1; i<len; ++i) {
            int current = int(s[i]-'0'); 
            int prev = int(s[i-1]-'0')*10+current; 
            int cur_counter=0; 
            if (current) {
                cur_counter += pre1; 
            }
            if (prev >=10 and prev<=26) {
                cur_counter += pre2; 
            }
            pre2 = pre1; 
            pre1 = cur_counter;
        }
        return pre1; 
    }
};
