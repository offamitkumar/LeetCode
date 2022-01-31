class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans{}; 
        for (auto&itr:accounts) {
            ans = max(ans, accumulate(itr.begin(), itr.end(), 0)); 
        }
        return ans; 
    }
};
