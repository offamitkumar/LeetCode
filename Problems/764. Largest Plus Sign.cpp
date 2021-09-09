class Solution {
public:
    int orderOfLargestPlusSign(int n, vector<vector<int>>& mines) {
        int counter{}; 
        vector<vector<int>>mat(n+1 , vector<int>(n+1,1));
        vector<vector<int>>dp_left(n+1,vector<int>(n+1,0));
        vector<vector<int>>dp_right(n+1,vector<int>(n+1,0));
        vector<vector<int>>dp_up(n+1,vector<int>(n+1,0));
        vector<vector<int>>dp_down(n+1,vector<int>(n+1,0));
        for (auto&itr:mines) {
            mat[itr[0]][itr[1]] = 0;
        }
        // up i-1, j
        for (int i=0; i<n; ++i) {
            for(int j=0; j<n; ++j) {
                if (i==0) {
                    dp_up[i][j] = mat[i][j];
                } else {
                    if (mat[i][j]) 
                        dp_up[i][j] = (dp_up[i-1][j] + mat[i][j]);
                    else
                        dp_up[i][j] = mat[i][j];
                }
            }
        }
        // down i+1, j
        for (int i=n-1; i>=0; --i) {
            for(int j=0; j<n; ++j) {
                if (i==n-1) {
                    dp_down[i][j] = mat[i][j];
                } else {
                    if (mat[i][j])
                        dp_down[i][j] = (dp_down[i+1][j] + mat[i][j]);
                    else
                        dp_down[i][j] = mat[i][j];
                }
            }
        }
        // left i, j-1
        for (int i=0; i<n; ++i) {
            for(int j=0; j<n; ++j) {
                if (j==0) {
                    dp_left[i][j] = mat[i][j];
                } else {
                    if (mat[i][j])
                        dp_left[i][j] = (dp_left[i][j-1] + mat[i][j]);
                    else
                        dp_left[i][j] = mat[i][j];
                }
            }
        }
        // right i, j+1
        for (int i=0; i<n; ++i) {
            for(int j=n-1; j>=0; --j) {
                if (j==n-1) {
                    dp_right[i][j] = mat[i][j];
                } else {
                    if (mat[i][j])
                        dp_right[i][j] = (dp_right[i][j+1] + mat[i][j]);
                    else
                        dp_right[i][j] = mat[i][j];
                }
            }
        }
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                counter = max(counter , min({dp_up[i][j], dp_down[i][j], dp_right[i][j], dp_left[i][j]}));
            }
        }
        return counter;
    }
};
