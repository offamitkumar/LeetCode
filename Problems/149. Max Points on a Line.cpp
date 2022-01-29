class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int res{}; 
        const int&n = points.size(); 
        for (int i=0; i<n; ++i) {
            map<long double, int>s; 
            int same{1}; 
            int counter{}; 
            for (int j=i+1; j<n; ++j) {
                if (points[i][0] == points[j][0] && points[i][1] == points[j][1]) {
                    same++; 
                } else if (points[i][0] == points[j][0]){
                    s[INT_MAX]++; 
                } else {
                    long double slope = (long double)(points[j][1] - points[i][1]) / (long double) (points[j][0] - points[i][0]); 
                    s[slope]++; 
                }
            }
            for (auto&itr:s) {
                counter = max(counter , itr.second); 
            }
            counter+=same; 
            res = max(res , counter); 
        }
        return res; 
    }
};
