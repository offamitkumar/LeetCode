class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        const int &n = grid.size(); 
        const int &m = grid[0].size(); 
        int ans{}, counter=0; 
        queue<pair<int,int>>q; 
        for (int i=0; i<n; ++i) {
            for (int j=0; j<m; ++j) {
                if (grid[i][j] == 2) {
                    q.push({i,j});
                    grid[i][j] = counter; 
                } 
            }
        }
        q.push({INT_MIN, INT_MIN});
        while (q.size()>1) {
            int r= q.front().first; 
            int c= q.front().second; 
            q.pop(); 
            if (r == INT_MIN) {
                q.push({INT_MIN, INT_MIN}); 
                counter--; 
                continue; 
            }
            const int DSIZE = 4;
            array<int,4>X{-1,1,0,0};
            array<int,4>Y{0,0,-1,1};
            for (int i=0; i<DSIZE; ++i) {
                int x = r + X[i]; 
                int y = c + Y[i]; 
                if (x>=0 && y>=0 && x<n && y<m && grid[x][y]==1) {
                    q.push({x,y}); 
                    grid[x][y] = counter; 
                }
            }
        }
        for (int i=0; i<n; ++i) {
            for (int j=0; j<m; ++j) {
                if (grid[i][j] == 1){
                    return -1; 
                }
            }
        }
        return abs(counter); 
    }
};
