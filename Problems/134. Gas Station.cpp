class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        if (accumulate(gas.begin(), gas.end(),0ll) < accumulate(cost.begin(), cost.end(),0ll)) {
            return -1; 
        }
        int answer{-1}, current{}; 
        const int&n = gas.size(); 
        for (int i=0; i<n; ++i) {
            if (current+gas[i] - cost[i] >=0) {
                if (answer == -1) answer = i; 
                current+=gas[i]-cost[i]; 
            } else {
                answer = -1; 
                current = 0; 
            }
        }
        return answer; 
    }
};
