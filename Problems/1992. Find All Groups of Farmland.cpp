class Solution {
    vector<vector<int>>ans;
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int n = land.size(); 
        int m = land[0].size();
        for (int i=0; i<n; ++i) {
            for (int j=0; j<m; ++j) {
                if (land[i][j]==1) {
                    int k =i, l =j; 
                    while(k+1<=n-1 && land[k+1][l]==1) {
                        ++k;
                    }
                    while(l+1<=m-1 && land[k][l+1]==1) {
                        ++l;
                    }
                    for (int a=i; a<=k; ++a) {
                        for(int b=j; b<=l; ++b){
                            land[a][b] =-1;
                        }
                    }
                    ans.push_back({i,j,k,l});
                }
            }
        }
        return ans;
    }
};
