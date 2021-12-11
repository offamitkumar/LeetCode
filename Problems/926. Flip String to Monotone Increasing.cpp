class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int zero{}, one{}; 
        const int&n = s.size(); 
        for (int i=0; i<n; ++i) {
            if (s[i] == '1') {
                zero++; 
            } else {
                one++; 
            }
            one = min(one , zero); 
        }
        return one; 
    }
};
