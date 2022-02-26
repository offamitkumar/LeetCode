class Solution {
public:
    int minCostSetTime(int startAt, int moveCost, int pushCost, int targetSeconds) {
        auto cost = [&](int now, int mn , int sec) {
            if (min(mn , sec) < 0 or max(mn , sec) >99) {
                return INT_MAX; 
            }
            int res{}; 
            for (auto&itr:to_string(mn*100+sec)) {
                res += pushCost + (now  == itr-'0' ? 0 : moveCost); 
                now = itr-'0'; 
            }
            return res; 
        };
        int m = targetSeconds/60; 
        int sec = targetSeconds%60; 
        return min(cost(startAt, m, sec) , cost(startAt, m-1,sec+60)); 
    }
};
