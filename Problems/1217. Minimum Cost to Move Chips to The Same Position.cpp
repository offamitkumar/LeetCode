class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int odd{} , even{}; 
        const int &n = position.size(); 
        for (int i=0; i<n; ++i) {
            odd += (position[i]&1); 
            even += (!(position[i]&1)); 
        }
        return min(odd , even); 
    }
};
