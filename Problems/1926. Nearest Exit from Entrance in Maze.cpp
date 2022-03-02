class Solution {
    int n,m; 
    vector<vector<bool>>visited; 
    const int DSIZE = 4;
    array<int,4>X{-1,1,0,0};
    array<int,4>Y{0,0,-1,1};
    bool pos(int x, int y) {
        if (x == 0 || y == 0 || x ==n-1 || y == m-1) {
            return true; 
        }
        return false; 
    }
    bool valid(int x, int y , vector<vector<char>>&maze) {
        if (x< 0 || y < 0 || x>=n || y>=m || maze[x][y] == '+' || visited[x][y]==true) {
            return false; 
        }
        return true; 
    }
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        n = maze.size(); 
        m = maze[0].size(); 
        visited.resize(n , vector<bool>(m,false)); 
        queue<pair<int,int>>q; 
        q.push({entrance[0], entrance[1]}); 
        visited[entrance[0]][entrance[1]] = true; 
        int counter{}; 
        while (!q.empty()) {
            counter++; 
            int N = q.size(); 
            for (int i=0; i<N; ++i){
                auto node = q.front(); q.pop(); 
                for (int i=0; i<DSIZE; ++i) {
                    int x = node.first + X[i]; 
                    int y = node.second + Y[i]; 
                    if (valid(x,y,maze)) {
                        if (pos(x,y)) {
                            return counter; 
                        }
                        visited[x][y] = true; 
                        q.push({x,y}); 
                    }
                }
            }
        }
        return -1; 
    }
};
