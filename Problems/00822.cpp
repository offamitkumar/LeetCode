class Solution {
public:
    int flipgame(vector<int>& fronts, vector<int>& backs) {
        unordered_set<int>notPossible; 
        for (int i=0; i<int(fronts.size()); ++i) {
            if (fronts.at(i) == backs.at(i)) {
                notPossible.insert(fronts.at(i));
            }
        }
        int ans = INT_MAX;
        for (int i=0; i<int(fronts.size()); ++i) {
            if (notPossible.find(fronts.at(i)) == notPossible.end()) {
                ans = min(ans , fronts.at(i));
            }
            if (notPossible.find(backs.at(i)) == notPossible.end()) {
                ans = min(ans , backs.at(i));
            }
        }
        if (ans == INT_MAX) {
            return 0;
        }
        return ans;
    }
};
