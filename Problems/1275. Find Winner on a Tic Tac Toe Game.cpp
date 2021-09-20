class Solution {
    public:
        string tictactoe(vector<vector<int>>& moves) {
            vector<vector<char>>mat(3 ,vector<char>(3)); 
            bool turn = true;
            for (auto&itr:moves) {
                if (turn) {
                    mat[itr[0]][itr[1]] = 'A'; 
                } else {
                    mat[itr[0]][itr[1]] = 'B'; 
                }
                turn = (!turn);
            }
            for (int i = 0; i < 3; i++){
                if (mat[i][0] == 'A' && mat[i][1] == 'A' && mat[i][2] == 'A')return "A";
                if (mat[i][0] == 'B' && mat[i][1] == 'B' && mat[i][2] == 'B')return "B";
                if (mat[0][i] == 'A' && mat[1][i] == 'A' && mat[2][i] == 'A')return "A";
                if (mat[0][i] == 'B' && mat[1][i] == 'B' && mat[2][i] == 'B')return "B";
            }
            if (mat[0][0] == 'A' && mat[1][1] == 'A' && mat[2][2] == 'A')return "A";
            if (mat[0][2] == 'A' && mat[1][1] == 'A' && mat[2][0] == 'A')return "A";
            if (mat[0][0] == 'B' && mat[1][1] == 'B' && mat[2][2] == 'B')return "B";
            if (mat[0][2] == 'B' && mat[1][1] == 'B' && mat[2][0] == 'B')return "B";
            if (moves.size() < 9)return "Pending";
            return "Draw"; 
        }
};
