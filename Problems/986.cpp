class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>>ans; 
        int i{}, j{}; 
        while (i<firstList.size() && j<secondList.size()) {
            int first = max(firstList[i][0] , secondList[j][0]); 
            int second = min(firstList[i][1], secondList[j][1]); 
            if (first <= second) {
                ans.push_back({first, second}); 
            } 
            if (firstList[i][1] < secondList[j][1]) {
                ++i; 
            } else {
                ++j; 
            }
        }
        return ans; 
    }
};

