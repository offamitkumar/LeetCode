class Solution {
    bool okay(int r, int c , const int&n , const int &m, vector<vector<int>>&grid) {
        if (r<0 || c < 0 || r>=n || c>=m || grid[r][c] != 0) {
            return false; 
        }
        return true; 
    }
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if (grid[0][0] == 1) return -1; 
        queue<tuple<int,int,int>>pq; 
        const int DSIZE = 8;
        array<int,8>X{-1,-1,-1,0,0 ,1,1,1};
        array<int,8>Y{-1, 0, 1,1,-1,1,-1,0};
        const int&n = grid.size(); 
        const int&m = grid[0].size(); 
        pq.push({0,0,1}); 
        grid[0][0] = 1; 
        while (!pq.empty()) {
            int x = get<0>(pq.front());
            int y = get<1>(pq.front());
            int co = get<2>(pq.front()); 
            if (x == n-1 && y == m-1) {
                return co; 
            }
            pq.pop(); 
            for (int i=0; i<DSIZE; ++i) {
                int r = x + X[i]; 
                int c = y + Y[i]; 
                if (okay(r,c,n,m,grid)) {
                    grid[r][c] = 1; 
                    pq.push({r,c,co+1}); 
                }
            }
        }
        return -1; 
    }
};
