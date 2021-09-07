class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int last = target[0]; 
        int cost = last;
        for (int i=1; i<target.size(); ++i) {
            if (target[i-1] < target[i]) {
                cost += (target[i] - target[i-1]);
            }
        }
        return cost; 
    }
};
