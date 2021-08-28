class Solution {
    vector< pair< int , int >>direction{{0,-1} , {-1 , 0} , {-1 , -1} , {1 , -1} , {0 , 1} , {-1 , 1} , {1 , 0} , {1 , 1}};
public:
    void gameOfLife(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid.at(0).size();
                auto valid = [row , col](int x, int y){
            return x>=0 && y>=0 && x<row && y<col;
        };

        for(int i=0;i<row;++i){
            for(int j=0;j<col;++j){
                int live_neighbour{};
                for(auto &[x ,y]:direction){
                    if(valid(i+x , y+j)){
                        live_neighbour+=(abs(grid[i+x][j+y]) ==1);
                    }
                }
                
                if(grid[i][j]==1 && (live_neighbour < 2 || live_neighbour >3)){
                    grid[i][j] = -1;
                }

                if(grid[i][j]==0 && (live_neighbour == 3)){
                    grid[i][j] = 2;
                }
            }
        }

        for(int i=0;i<row;++i){
            for(int j=0;j<col;++j){
                if(grid[i][j]>0){
                    //cout<<"* ";
                    grid[i][j] = 1;
                }else{
                    //cout<<". ";
                    grid[i][j] = 0;
                }
            }
            //cout<<'\n'; 
        }

    }
};
