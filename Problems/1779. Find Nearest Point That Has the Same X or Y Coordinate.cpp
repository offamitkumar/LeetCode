class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int dis{INT_MAX}, ans{-1}; 
        int n = points.size(); 
        for (int i=0; i<n; ++i) {
            const int& a = points[i][0]; 
            const int& b = points[i][1]; 
            if (x == a || y == b) {
                const int &d = abs(x-a)+abs(y-b);
                if (dis > d)  {
                    dis = d; 
                    ans = i; 
                }
            }
        }
        return ans; 
    }
};
