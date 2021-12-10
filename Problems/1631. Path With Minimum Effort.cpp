class Solution {
    int rows , cols; 
    bool okay(int row, int col) {
        if (row < 0 || col < 0 || row >= rows || col >= cols) {
            return false; 
        }
        return true; 
    }
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int def_cost = 10000000;
        rows = heights.size(); 
        cols = heights[0].size(); 
        const int DSIZE = 4;
        array<int,4>X{-1,1,0,0};
        array<int,4>Y{0,0,-1,1};
        priority_queue<tuple<int,int,int>>pq; 
        vector<vector<int>>cost(rows, vector<int>(cols,def_cost)); 
        cost[0][0] = 0; 
        pq.push(make_tuple(0,0,0)); 
        while (!pq.empty()) {
            int current_cost = (-1)*get<0>(pq.top()); 
            int row = get<1>(pq.top()); 
            int col = get<2>(pq.top()); 
            pq.pop(); 
            if (row == rows-1 and col == cols-1) {
                return current_cost; 
            }
            for (int i=0; i<DSIZE; ++i) {
                int r = row + X[i]; 
                int c = col + Y[i]; 
                if (okay(r,c)) {
                    int maxAbs= max(current_cost, abs(heights[r][c] - heights[row][col]));
                    if (maxAbs < cost[r][c]) {
                        cost[r][c] = maxAbs; 
                        pq.push(make_tuple((-1)*cost[r][c],r,c)); 
                    }
                }
            }
        }
        return -1; 
    }
};
