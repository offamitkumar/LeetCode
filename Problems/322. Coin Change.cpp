class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        const int &n = coins.size();
        vector<int64_t>min_coins(amount+1 , INT_MAX);
        sort(coins.begin(), coins.end());
        min_coins[0] = 0;
        for (int i=1; i<=amount; ++i) {
            for (int j=0;j<n && coins[j] <=i; ++j) {
                min_coins[i] = min(min_coins[i],min_coins[i-coins[j]]+(int64_t)1);
            }
        }
        if (min_coins[amount]==INT_MAX) {
            return -1;
        } else {
            return min_coins[amount];
        }
    }
};
