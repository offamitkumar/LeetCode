class Solution {
    vector<vector<string>>ans;
    vector<string>board;
    int N;
    bitset<30>diagonalOne , diagonalTwo , column;
    bool isValid(int row , int col){
        if(diagonalTwo.test(row-col+N-1) || diagonalOne.test(row+col) || column[col]){
            return false;;
        }else{
            return true;
        }
    }
    void checkArrangement(int row){
        if(row == N){
            ans.push_back(board);
            return;
        }
        for(int i=0;i<N; ++i){
            if(isValid(row , i)){
                board[row][i]='Q';
                column.set(i);
                diagonalOne.set(row+i);
                diagonalTwo.set(row-i+N-1);
                checkArrangement(row+1);
                board[row][i]='.';
                column.reset(i);
                diagonalOne.reset(row+i);
                diagonalTwo.reset(row-i+N-1);
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        ans.clear();
        N = n;
        diagonalTwo.reset();
        diagonalOne.reset();
        column.reset();
        board.resize(n , string(n , '.'));
        int row = 0 ; int col = 0;
        for(int i=0;i<n;++i){
            board[0][i]='Q';
            column.set(i);
            diagonalOne.set(i);
            diagonalTwo.set(0-i+N-1);
            checkArrangement(1);
            board[0][i]='.';
            column.reset(i);
            diagonalOne.reset(i);
            diagonalTwo.reset(0-i+N-1);
        }
        return ans;
    }
};
