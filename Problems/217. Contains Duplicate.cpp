class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>s; 
        for (auto&itr:nums) {
            if (s.find(itr) != s.end()) return true; 
            s.insert(itr);
        }
        return false; 
    }
};
