class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<bool>row(m , false), col(n, false); 
        for(auto &itr: indices) {
            row[itr[0]]= row[itr[0]]^true; 
            col[itr[1]]= col[itr[1]]^true; 
        }
        int x = accumulate(row.begin(), row.end(), 0ll); 
        int y = accumulate(col.begin(), col.end(), 0ll); 
        return x * n  + y * m - 2 * x * y; 
    }
};
