class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>bits1(32), bits2(32); 
        const int &n = nums.size();
        int ans{}; 
        for (int i=0; i<32; ++i) {
            int a{}, b{};
            for (int j = 0; j<n; ++j) {
                if ( j & (1<<i)) {
                    b++;
                }
                if (nums[j] & (1<<i)) {
                    a++;
                }
            }
            if (a > b) {
                ans |= (1<<i);
            }
        }
        return ans;
    }
};
