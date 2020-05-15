class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans{};
        for(auto i=1;i<(int)prices.size();++i){
            ans+=(max(0,prices[i]-prices[i-1]));
        }
        return ans;
    }
};
