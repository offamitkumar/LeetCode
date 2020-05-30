class Solution {
    static bool comparator(vector<int>&p1, vector<int>&p2){
        double dis_one = sqrt(p1[0]*p1[0] + p1[1]*p1[1]);
        double dis_two = sqrt(p2[0]*p2[0] + p2[1]*p2[1]);
        return dis_one < dis_two;
    }
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        sort(points.begin(), points.end(), comparator);
        vector<vector<int>>res;
        for(int i = 0; i < K; ++i) {
            res.push_back(points[i]);
        }
        return res;
    }
};
