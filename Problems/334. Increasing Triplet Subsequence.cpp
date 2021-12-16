class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int a{INT_MAX}, b{INT_MAX}; 
        for (auto&itr:nums) {
            if (a >= itr) {
                a = itr; 
            } else if (b >= itr) {
                b = itr; 
            } else {
                return true; 
            }
        }
        return false; 
    }
};
