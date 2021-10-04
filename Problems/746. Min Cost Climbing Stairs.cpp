class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        const int &n = cost.size();
        int f{INT_MAX} , s{INT_MAX}; 
        for (int i=0; i<n; ++i) {
            if (i == 0) {
                f = cost[i];
            } else if (i == 1) {
                s = f; 
                f = cost[i];
            } else {
                int curr = min (f , s) + cost[i]; 
                s = f; 
                f = curr; 
            }
        }
        return min(f , s);
    }
};
