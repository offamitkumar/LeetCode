class Solution {
    int getTargetRow(vector<vector<int>>& matrix, const int &target) {
        int rows = matrix.size(); 
        int l_col = matrix[0].size()-1; 
        int low= 0, high = rows-1; 
        while (low < high) {
            int mid = (low + high) / 2; 
            int current = matrix[mid][l_col]; 
            if (current >= target) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low; 
    }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size(); 
        int col = matrix[0].size(); 
        if (matrix[0][0] > target || matrix[row-1][col-1] < target) return false; 
        int targetRow = getTargetRow(matrix, target); 
        int low = 0 , high = col - 1; 
        while (low <= high) {
            int mid = (low+ high) / 2; 
            int current = matrix[targetRow][mid]; 
            if (current == target) {
                return true; 
            }
            if (current < target) {
                low = mid + 1; 
            } else {
                high = mid -1; 
            }
        }
        return false; 
    }
};
