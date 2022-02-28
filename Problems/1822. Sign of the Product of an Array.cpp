class Solution {
public:
    int arraySign(vector<int>& nums) {
        int x = 1; 
        for (auto&itr:nums) {
            x *= (itr / max(1,abs(itr))); 
        }
        return x; 
    }
};
