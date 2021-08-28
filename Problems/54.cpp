class Solution {
    vector<pair<int,int>> dir= {
        { 0, 1} , 
        { 1, 0} ,
        {0, -1} ,
        {-1, 0}  
    };
    vector<vector<bool>>visited;
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        if(matrix.size()==0 || matrix[0].size() == 0){
            return ans;
        }
        int C = matrix[0].size();
        int R = matrix.size();

        visited.assign(R , vector<bool>(C , false));
        int r,c,d;
        r = c = d = 0;
        
        for(int tr,tc, _=0;_<(R*C);++_){
            tr = r + dir[d].first;
            tc = c + dir[d].second;
            ans.push_back(matrix[r][c]);
            visited[r][c] = true;
            if(tc>=0 and tc<C and tr>=0 and tr<R and (not(visited[tr][tc]))){
                r = tr;
                c = tc;
            }else{
                d = (d+1)%4;
                r = r+dir[d].first;
                c = c+dir[d].second;
                cerr<<r<<"\t"<<c<<endl;
            }
        }
        return ans;
    }
};
