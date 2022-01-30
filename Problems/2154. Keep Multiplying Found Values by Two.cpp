class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int>s; 
        for (auto&itr:nums) {
            s.insert(itr); 
        }
        while (s.find(original) != s.end()) {
            original*=2; 
        }
        return original; 
    }
};
