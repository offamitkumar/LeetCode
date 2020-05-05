class Solution {
private:
    int bestans;
public:
    bool check(vector<vector<int>>&mat){
        bool ok = true;
       // cout<<"MATRIX: "<<endl;
        for(int i=0;i<(int)mat.size();++i){
            for(int j=0;j<(int)mat.at(i).size();++j){
              //  cout<<mat[i][j]<<' ';
                ok&=(mat[i][j]!=1);
            }
            //cout<<endl;
        }
        //cout<<endl;
        return ok;
    }
    void ans(vector<vector<int>>&mat,int counter,int I , int J){
       // cout<<I<<" "<<J<<endl;
        if(check(mat)){
            bestans = min(bestans,counter);
            return ;
        }
        for(int i=I;i<(int)mat.size();++i){
            for(int j=J;j<(int)mat.at(i).size();++j){
                mat[i][j]^=1;
                if(i+1<(int)mat.size()){
                    mat[i+1][j]^=1;
                }
                if(i-1>=0){
                    mat[i-1][j]^=1;
                }
                if(j+1<mat.at(i).size()){
                    mat[i][j+1]^=1;
                }
                if(j-1>=0){
                    mat[i][j-1]^=1;
                }
                ans(mat,counter+1,i,j+1);
                mat[i][j]^=1;
                if(i+1<(int)mat.size()){
                    mat[i+1][j]^=1;
                }
                if(i-1>=0){
                    mat[i-1][j]^=1;
                }
                if(j+1<mat.at(i).size()){
                    mat[i][j+1]^=1;
                }
                if(j-1>=0){
                    mat[i][j-1]^=1;
                }
            }
            J=0;
        }
        
    }
    int minFlips(vector<vector<int>>& mat) {
        bestans=INT_MAX;
        ans(mat,0,0,0);
        return ((bestans==INT_MAX)?-1:bestans);
    }
};
