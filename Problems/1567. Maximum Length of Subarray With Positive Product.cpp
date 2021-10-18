class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        const int &n = nums.size(); 
        vector<int>pos(n),neg(n); 
        pos[0] = (nums[0] > 0); 
        neg[0] = (nums[0] < 0); 
        int ans = pos[0];
        for (int i=1; i<n; ++i) {
            if (nums[i] > 0) {
                pos[i] = pos[i-1]+1; 
                neg[i] = (neg[i-1]>0) ? 1 + neg[i-1] : 0; 
            } else if (nums[i] < 0) {
                pos[i] = (neg[i-1]>0) ? 1 + neg[i-1] : 0; 
                neg[i] = pos[i-1] + 1; 
            }
            ans = max(ans , pos[i]);
        }
        return ans; 
    }
};
