class Solution {
    vector<int> intersection(vector<int>&interval_first, vector<int>&interval_second){
        vector<int>res;
        int left_point = max(interval_first[0] , interval_second[0]);
        int right_point = min(interval_first[1] , interval_second[1]);
        if(left_point>right_point){
            res.push_back(-1);
        }else{
            res.push_back(left_point);
            res.push_back(right_point);
        }
        return res;
    }
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>>ans;
        int i=0 , j = 0;
        while(i<A.size() and j<B.size()){
            vector<int>temp = intersection(A[i] , B[j]);
            if(temp[0] != -1)
                ans.push_back(temp);
            if(A[i][1]>B[j][1]){
                ++j;
            }else{
                ++i;
            }
        }
        return ans;
    }
};

