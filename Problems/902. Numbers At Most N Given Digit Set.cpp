class Solution {
public:
    int atMostNGivenDigitSet(vector<string>& digits, int n) {
        string num= to_string(n); 
        const int &k = num.size(); 
        vector<int>dp(k+1); 
        dp[k] = 1; 
        for (int i=k-1; i>=0; --i) {
            for (auto&itr:digits) {
                if (itr[0] < num[i]) {
                    dp[i] += pow(digits.size(),k-i-1); 
                } else if (itr[0] == num[i]) {
                    dp[i] += dp[i+1]; 
                }
            }
        }
        for (int i=1; i<k; ++i) {
            dp[0] += pow(digits.size(), i); 
        }
        return dp[0];
    }
};
