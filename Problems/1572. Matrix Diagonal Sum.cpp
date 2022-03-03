class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum{}; 
        const int&n = mat.size(); 
        for (int i=0; i<n; ++i) {
            sum+=mat[i][i]; 
        }
        for (int i=n-1,j=0; i>=0; --i) {
            if (i != j){
                sum+=mat[i][j]; 
            }
            ++j; 
        }
        return sum; 
    }
};
