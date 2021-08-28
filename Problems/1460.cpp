class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());
        for(auto i=0;i<(int)target.size();++i){
            if(arr[i] != target[i]){
                return false;
            }
        }
        return true;
    }
};
