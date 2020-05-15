class Solution {
public:
    bool checkStraightLine(vector<vector<int>>&v) {
        if(v.size()<=2){
            return true;
        }
        double s = double(v[1][1]-v[0][1])/double(v[1][0]-v[0][0]);
        for(int i=0;i<v.size()-1;++i){
            if(v[i+1][0]-v[i][0]==0){
                return false;
            }
            double s1 = double(v[i+1][1] - v[i][1])/double(v[i+1][0]-v[i][0]);
            if(s != s1){
                return false;
            }
        }
        return true;
    }
};
