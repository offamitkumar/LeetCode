class Solution {
    int grid[9][9];
    pair<int,int> getFreeBox( void ) {
        for(auto i = 0; i< 9; ++i){
            for(auto j=0; j<9; ++j){
                if(grid[i][j] == 0){
                    return make_pair(i,j);
                }
            }
        }
        return make_pair(-1 , -1);
    }
    bool isToPlace(pair<int,int>&p , int k){
        // is row safe
        int row= p.first;
        int col = p.second;
        for(int i=0;i<9; ++i){
            if(grid[row][i] == k){
                return false;
            }
        }
        for(int i=0;i<9; ++i){
            if(grid[i][col]==k){
                return false;
            }
        }
        // is box safe 
        int x = row - (row % 3);
        int y = col - (col % 3);
        for(auto i = 0; i<3; ++i){
            for(auto j=0; j<3; ++j){
                if(grid[i+x][j+y] == k){
                    return false;
                }
            }
        }
        return true;
    }

    bool sol(void){
        pair<int,int>p = getFreeBox();
        if(p.first == -1 ){
            return true;
        }
        for(int i=1; i<=9; ++i){
            if(isToPlace(p , i)){
                grid[p.first][p.second] = i;
                if(sol()){
                    return true;
                }
                grid[p.first][p.second] = 0;
            }
        }
        return false;
    }
    public:
    void solveSudoku(vector<vector<char>>& board) {
        for(auto i=0;i<(board.size());++i){
            for(auto j=0;j<board[0].size();++j){
                if(board[i][j]=='.'){
                    grid[i][j]=0;
                    continue;
                }
                grid[i][j] = int(board[i][j]-'0');
            }
        }
        for(auto i=0;i<(board.size());++i){
            for(auto j=0;j<board[0].size();++j){
                cout<<grid[i][j]<<' ';
            }
            cout<<endl;
        }        
        sol();
        cout<<endl<<"solved"<<endl;
        for(auto i=0;i<(board.size());++i){
            for(auto j=0;j<board[0].size();++j){
                cout<<grid[i][j]<<' ';
            }
            cout<<endl;
        }
        for(auto i=0;i<(board.size());++i){
            for(auto j=0;j<board[0].size();++j){
                board[i][j] =char(grid[i][j]+'0');
            }
        }
    }
};
