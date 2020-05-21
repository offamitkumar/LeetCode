class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int result{};
        const int row = static_cast<int>(matrix.size());
        const int col = static_cast<int>(matrix[0].size());
        for(int i=0;i<row;++i){
            for(int j=0;j<col;++j){
                if(i and j and matrix[i][j]) {
                    matrix[i][j] = min({matrix[i-1][j] , matrix[i][j-1] , matrix[i-1][j-1]})+1;
                }
                result+=matrix[i][j];
            }
        }
        return result;
    }
};
