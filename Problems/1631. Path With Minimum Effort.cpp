class Solution {
    vector<vector<bool>>visited; 
    int n , m; 
    void fillGrid (void) {
        for (auto&itr:visited){
            fill(itr.begin(), itr.end(), false); 
        }
        return ;
    }
    const int DSIZE = 4;
    array<int,4>X{-1,1,0,0};
    array<int,4>Y{0,0,-1,1};
    bool okay(int r, int c) {
        if (r<0 || c<0 || r>=n || c>=m || visited[r][c]) {
            return false; 
        }
        return true; 
    }
    void dfs(int row, int col,int cost , vector<vector<int>>& heights) {
        visited[row][col] = true; 
        for (int i=0; i<DSIZE; ++i) {
            int r = row + X[i] ;
            int c = col + Y[i] ; 
            if (okay(r,c) && abs(heights[r][c] - heights[row][col])<=cost) {
                dfs(r,c,cost,heights); 
            }
        }
    }
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        n = heights.size(); 
        m= heights[0].size(); 
        visited.resize(n); 
        for (auto&itr:visited)
            itr.resize(m); 
        int low= 0, high = 3*1e5; 
        while (low < high) {
            int mid= (low + high) / 2; 
            fillGrid(); 
            dfs(0,0,mid, heights); 
            if (visited[n-1][m-1]==true) {
                high = mid; 
            } else {
                low = mid + 1; 
            }
        }
        return high; 
    }
};
