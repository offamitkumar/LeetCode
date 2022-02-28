class Solution {
public:
    int minimumFinishTime(vector<vector<int>>& tires, int changeTime, int numLaps) {
        vector<int64_t>withoutChange(19,INT_MAX); 
        for (auto&itr:tires) {
            int64_t f = itr[0]; 
            int64_t r = itr[1]; 
            int64_t t{}; 
            for (int i=1; i<=numLaps; ++i) {
                int64_t temp = (int64_t)f * (int64_t)pow(r, i-1); 
                t += temp; 
                if ( t>= pow(2,17)) break; 
                withoutChange[i] = min(withoutChange[i], t); 
            }
        }
        vector<int64_t>dp(numLaps+1, INT_MAX); 
        for (int i=1; i<=numLaps; ++i) {
            dp[i] = (i < 19) ? withoutChange[i] : INT_MAX; 
            for (int j=1; j<i; ++j) {
                dp[i] = min(dp[i] , dp[j] + changeTime + dp[i-j]); 
            }
        }
        return dp[numLaps]; 
    }
};
