class Solution {
    void fill(vector<vector<int>>&image , int c_X ,int c_Y , int n_C , int def_Pix){
        if(c_X>=image.size() || c_X<0){
            return ;
        }
        if(c_Y>=image[0].size() || c_Y<0){
            return ;
        }
        image[c_X][c_Y] = n_C;
        if(c_X+1<(int)image.size() && image[c_X+1][c_Y] != n_C && image[c_X+1][c_Y] == def_Pix){
            image[c_X+1][c_Y] = n_C;
            fill(image , c_X+1 , c_Y , n_C , def_Pix);
        }
        if(c_X-1>=0 && image[c_X-1][c_Y] != n_C && image[c_X-1][c_Y] == def_Pix){
            image[c_X-1][c_Y] = n_C;
            fill(image , c_X-1 , c_Y , n_C , def_Pix);
        }
        if(c_Y+1<image[0].size() && image[c_X][c_Y+1] != n_C && image[c_X][c_Y+1] == def_Pix){
            image[c_X][c_Y+1] = n_C;
            fill(image , c_X , c_Y+1 , n_C , def_Pix);
        }
        if(c_Y-1>=0 && image[c_X][c_Y-1] != n_C && image[c_X][c_Y-1] == def_Pix){
            image[c_X][c_Y-1] = n_C;
            fill(image , c_X , c_Y-1 , n_C , def_Pix);
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        fill(image , sr , sc , newColor , image[sr][sc]);
        return image;
    }
};


