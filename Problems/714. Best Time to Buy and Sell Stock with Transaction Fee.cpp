class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        const int&n = prices.size(); 
        int buy = -prices[0] , sell{} , oldBuy{}; 
        for (int i=1; i<n; ++i) {
            oldBuy = buy; 
            buy = max(buy , sell - prices[i]); 
            sell = max(sell , oldBuy - fee + prices[i]); 
        }
        return sell; 
    }
};
