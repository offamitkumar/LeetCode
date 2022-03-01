class Solution {
public:
    bool checkStraightLine(vector<vector<int>>&v) {
        if(v.size()<=2){
            return true;
        }
        double s ; 
        if (v[1][0] != v[0][0]) 
            s = double(v[1][1]-v[0][1])/double(v[1][0]-v[0][0]);
        else 
            s = INT_MAX; 
        for(int i=0;i<v.size()-1;++i){
            double s1; 
            if (v[i+1][0] != v[i][0]) 
                s1 = double(v[i+1][1] - v[i][1])/double(v[i+1][0]-v[i][0]);
            else s1 = INT_MAX; 
            if(s != s1){
                return false;
            }
        }
        return true;
    }
};
