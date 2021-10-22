class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        const int &n = triangle.size();
        vector<vector<int>>ans = triangle; 
        ans[0][0]= triangle[0][0]; 
        for (int i=0; i<n-1; ++i) {
            for (int j=0; j<triangle[i].size(); ++j) {
                if (j == 0) {
                    ans[i+1][j] = INT_MAX; 
                }
                ans[i+1][j+1] = INT_MAX;
                ans[i+1][j] = min(ans[i+1][j] , ans[i][j] + triangle[i+1][j]); 
                ans[i+1][j+1] = min(ans[i+1][j+1] , ans[i][j] + triangle[i+1][j+1]); 
            }
        }
        return *min_element(ans[n-1].begin(), ans[n-1].end()); 
    }
};
