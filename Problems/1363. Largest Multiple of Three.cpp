class Solution {
public:
    string largestMultipleOfThree(vector<int>& digits) {
        vector<int>dp[3]; 
        const int &n = digits.size(); 
        int sum{};
        for (int i=0; i<n; ++i) {
            sum += digits[i];
            dp[digits[i]%3].push_back(digits[i]); 
        }
        for (int i=0; i<3; ++i) {
            sort(dp[i].begin(), dp[i].end()); 
        }
        if ( sum%3 == 1 ) {
            if (dp[1].size() >= 1) {
                dp[1][0] = -1; 
            } else if (dp[2].size()>=2){
                dp[2][0] = -1; 
                dp[2][1] = -1; 
            } else {
                return "";
            }
        } else if (sum%3 == 2 ) {
            if (dp[2].size() >= 1) {
                dp[2][0] = -1; 
            } else if (dp[1].size() >= 2){
                dp[1][0] = -1; 
                dp[1][1] = -1;
            } else {
                return ""; 
            }
        } 
        string res{};
        for (int i=0; i<3; ++i) {
            for (int j=0; j<dp[i].size(); ++j) {
                if (dp[i][j] != -1) {
                    res += to_string(dp[i][j]);
                }
            }
        }
        sort(res.begin(), res.end(), greater<char>()); 
        if (res[0] == '0') {
            return "0";
        }
        return res;
    }
};
