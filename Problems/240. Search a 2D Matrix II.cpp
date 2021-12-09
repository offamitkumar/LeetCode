class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(); 
        int cols = matrix[0].size(); 
        int r = rows-1 , c = 0; 
        while (r >= 0 and c < cols) {
            int current = matrix[r][c]; 
            if (current == target) return true; 
            if (current > target) {
                --r; 
            } else {
                ++c; 
            }
        }
        return false; 
    }
};
