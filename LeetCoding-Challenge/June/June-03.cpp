class Solution {
    static bool comparator(vector<int>&a, vector<int>&b){
        return (a[0]-a[1]) < (b[0] - b[1]);
    }
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(), costs.end(), comparator);
        const int n = costs.size();
        int total_cost{};
        for(int i=0;i<n;++i){
            if(i<n/2){
                total_cost+=costs[i][0];
            }else{
                total_cost+=costs[i][1];
            }
        }
        return total_cost;
    }
};
