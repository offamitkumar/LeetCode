bool compare(vector<int>&a, vector<int>&b) {
    return a[1] < b[1]; 
}
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), compare); 
        int counter{}; 
        const int&n = points.size(); 
        int64_t last_ = (int64_t)INT_MIN-111; 
        for (int i=0; i<n; ++i) {
            if (last_ < points[i][0]) {
                counter++; 
                last_ = points[i][1]; 
            } else {
                last_ = min(last_ , (int64_t)points[i][1]); 
            }
        }
        return counter; 
    }
};

