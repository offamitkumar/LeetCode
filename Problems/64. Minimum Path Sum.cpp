class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        const int &n = grid.size(); 
        const int &m = grid.at(0).size(); 
        vector<vector<int>>dp (n , vector<int>(m , 1000000)); 
        dp.at(0).at(0) = grid.at(0).at(0); 
        for (int i=0; i<n; ++i) {
            for (int j=0; j<m; ++j) {
                if (i+1<n)
                    dp.at(i+1).at(j) = min(dp.at(i+1).at(j) , dp.at(i).at(j) + grid.at(i+1).at(j)); 
                if (j+1<m)
                    dp.at(i).at(j+1) = min(dp.at(i).at(j+1) , dp.at(i).at(j) + grid.at(i).at(j+1)); 
            }
        }
        return dp.at(n-1).at(m-1);
    }
};
