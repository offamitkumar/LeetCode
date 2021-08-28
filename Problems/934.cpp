using island = set<pair<int,int>>;
class Solution {
    vector<pair<int,int>> dir = {
        {0 , 1},
        {0 , -1} ,
        {1 , 0} , 
        {-1 , 0}
    };
    int row , col;
    bool valid(int x, int y){
        if(x>=0 && x<row && y>=0 && y<col){
            return true;
        }else{
            return false;
        }
    }
    void flood_fill(island &A ,vector<vector<int>>&grid , int x , int y){
        A.insert(make_pair(x,y));
        int tr , tc;
        for(int i=0; i<(int)dir.size();++i){
            tr = x + dir[i].first;
            tc = y + dir[i].second;
            if(valid(tr , tc) && grid[tr][tc]==1 && !A.count(make_pair(tr , tc)))               {
                flood_fill(A ,grid, tr , tc);
            }
        }
    }
    template<typename T>
        int dist(T a , T b){
            return abs(a.first - b.first) + abs(a.second - b.second);
        }
public:
    int shortestBridge(vector<vector<int>>& grid) {
        island  A, B;
        row = grid.size();
        col = grid[0].size();
        for(int r = 0; r < row; ++r){
            for(int c = 0; c < col ; ++c){
                if(grid[r][c]==0) continue;
                if(A.empty()){
                    flood_fill(A, grid , r , c);
                }else if(B.empty() && !A.count({r,c})){
                    flood_fill(B ,grid , r , c);
                }
            }
        }
        int min_distance = row+col; // worse case 
        // we could use BFS to make it a little bit faster 
        for(auto&First:A){
            for(auto&Second:B){
                min_distance = min(min_distance , dist(First , Second));
            }
        }
        return min_distance - 1;
    }
};

