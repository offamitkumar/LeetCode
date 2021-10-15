class Solution {
public:
    int maxProfit(vector<int>& prices) {
        const int &n = prices.size(); 
        int best = 0;
        int mxd = 0 - prices[0]; 
        for (int i=1; i<n; ++i) {
            best = max(best , prices[i] + mxd); 
            mxd = max(mxd ,-prices[i]);
        }
        return best;
    }
};

