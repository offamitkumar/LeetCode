class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        vector<bool>arr(4,true); 
        const int&n = mat.size(); 
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                if (mat[i][j] != target[i][j])arr[0] = false; 
                if (mat[i][j] != target[n-j-1][i]) arr[1] = false; 
                if (mat[i][j] != target[n-i-1][n-j-1]) arr[2] = false; 
                if (mat[i][j] != target[j][n-i-1]) arr[3] = false; 
            }
        }
        return accumulate(arr.begin(), arr.end(), 0ll) != 0; 
    }
};
