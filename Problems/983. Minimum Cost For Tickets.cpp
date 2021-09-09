class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        const int &n = days.size();
        vector<int>min_cost(n+1,500000); 
        min_cost[n] =0;
        for (int i=n-1; i>=0; --i) {
            int day_7=i, day_30=i; 
            while (day_7 < n && days[day_7] < days[i] + 7) day_7++;
            while (day_30 < n && days[day_30] < days[i] + 30) day_30++;
            min_cost[i] = min({min_cost[i+1]+costs[0] , min_cost[day_7]+costs[1] , min_cost[day_30]+costs[2]});
        }
        return min_cost[0]; 
    }
};
