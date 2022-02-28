class Solution {
    bool valid(int n, int m , int x, int y , vector<vector<int>>&d) {
        if (x<0 || y <0 || x>=n || y>=m || d[x][y] !=INT_MAX) {
            return false; 
        }
        return true; 
    }
public:
    int maxDistance(vector<vector<int>>& grid) {
        int n = grid.size(); 
        int m = grid[0].size(); 
        vector<vector<int>>d(n , vector<int>(m, INT_MAX)); 
        queue<pair<int,int>>q; 
        for (int i=0; i<n; ++i) {
            for (int j=0; j<m; ++j) {
                if (grid[i][j]) {
                    q.push({i,j}); 
                    d[i][j]= 0; 
                }
            }
        }
        int counter{-1}; 
        const int DSIZE = 4;
        array<int,4>X{-1,1,0,0};
        array<int,4>Y{0,0,-1,1};
        while (!q.empty()) {
            int p = q.size(); 
            for (int i=0; i<p; ++i){
                auto itr = q.front(); q.pop(); 
                for (int j=0; j<DSIZE; ++j) {
                    int x = itr.first + X[j]; 
                    int y = itr.second + Y[j]; 
                    if (valid(n,m,x,y,d)) {
                        d[x][y] = d[itr.first][itr.second]+1;
                        counter = max(counter , d[x][y]); 
                        q.push({x,y}); 
                    }
                }
            }
        }
        return counter; 
    }
};
