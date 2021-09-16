class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        const int &n = matrix.size(); 
        const int &m = matrix[0].size(); 
        vector<int>ans; 
        int i=0 , j =-1; 
        bool changed = true;
        while (changed) {
            changed = false;
            while (++j<m && matrix[i][j] != INT_MAX) {
                ans.push_back(matrix[i][j]);
                matrix[i][j] = INT_MAX;
                changed = true;
            }
            --j;
            while (++i<n && matrix[i][j] != INT_MAX) {
                ans.push_back(matrix[i][j]); 
                matrix[i][j] = INT_MAX;
                changed = true;
            }
            --i;
            while (--j>=0 && matrix[i][j] != INT_MAX) {
                ans.push_back(matrix[i][j]); 
                matrix[i][j] = INT_MAX;
                changed = true;
            }
            ++j;
            while (--i>=0 && matrix[i][j] != INT_MAX) {
                ans.push_back(matrix[i][j]); 
                matrix[i][j] = INT_MAX;
                changed = true;
            }
            ++i;
        }
        return ans;
    }
};
