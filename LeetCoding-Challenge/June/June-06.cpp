class Solution {
    static bool comparator(vector<int>&a , vector<int>&b){
        if(a[0] == b[0]){
            return a[1] < b[1];
        }else{
            return a[0] > b[0];
        }
    }
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(), comparator);
        vector<vector<int>>res;
        for(auto&itr:people){
            res.insert(res.begin()+itr[1],itr);
        }
        return res;
    }
};
