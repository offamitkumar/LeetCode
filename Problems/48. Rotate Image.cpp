class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        const int &n = matrix.size(); 
        const int &m = matrix[0].size(); 
        for (int i=0; i<n; ++i) {
            for (int j=i; j<m; ++j) {
                swap(matrix[i][j] , matrix[j][i]); 
            }
        }
        for (int i=0; i<n; ++i) {
            int k = 0, j = m-1; 
            while (k<j) {
                swap(matrix[i][j] , matrix[i][k]); 
                j--;
                k++; 
            }
        }
    }
};
