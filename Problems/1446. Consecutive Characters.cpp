class Solution {
public:
    int maxPower(string s) {
        int ans{}, temp{}; 
        const int &n = s.length();
        for (int i=0; i<n; ++i) {
            if (i==0 || s[i] == s[i-1]) {
                temp++; 
            } else {
                temp = 1; 
            }
            ans = max(ans , temp); 
        }
        return ans; 
    }
};
