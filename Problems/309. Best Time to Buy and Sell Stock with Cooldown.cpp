class Solution {
public:
    int maxProfit(vector<int>& prices) {
        const int &n = prices.size();
        int no_stocks = 0; 
        int current = - prices.at(0); 
        int sell =0; 
        for (int i=1; i<n; ++i) {
            int o_no_stocks = no_stocks , o_current = current , o_sell= sell;
            no_stocks = max(o_sell , o_no_stocks); 
            current = max(o_current , o_no_stocks - prices.at(i)); 
            sell = o_current + prices.at(i); 
        }
        return max(no_stocks , sell); 
    }
};

