class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>>res(r , vector<int>(c)); 
        const int&n = mat.size(); 
        const int&m = mat[0].size(); 
        int a{}, b{}; 
        if (n * m != r * c) return mat; 
        for (int i=0; i<n; ++i) {
            for (int j=0; j<m; ++j) {
                res[a][b++] = mat[i][j]; 
                if (b == c) {
                    b = 0; 
                    a++; 
                }
            }
        }
        return res; 
    }
};
