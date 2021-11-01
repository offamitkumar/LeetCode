class Solution {
    vector<vector<bool>>visited;
    int n , m; 
    const int DSIZE = 4;
    array<int,4>X{-1,1,0,0};
    array<int,4>Y{0,0,-1,1};
    void dfs(int x , int y, vector<vector<char>>&board) {
        visited[x][y] = true; 
        for (int i=0; i<DSIZE; ++i) {
            int r = x+X[i]; 
            int c = y+Y[i];
            if (r>=0 && c>=0 && r<n && c<m && visited[r][c] == false && board[r][c] == 'O') {
                dfs(r,c,board); 
            }
        }
    }
public:
    void solve(vector<vector<char>>& board) {
        n = board.size(); 
        m = board[0].size(); 
        visited.resize(n, vector<bool>(m,false)); 
        for (int i=0; i<n; ++i) {
            for (int j=0; j<m; ++j) {
                if (i==0 || j==0 || j==m-1 || i==n-1) {
                    if (visited[i][j]==false && board[i][j]=='O') {
                        dfs(i,j, board);
                    }
                }
            }
        }
        for (int i=0; i<n; ++i) {
            for (int j=0; j<m; ++j) {
                if (visited[i][j]==false ) {
                    board[i][j] = 'X';
                }
            }
        }
    }
};

