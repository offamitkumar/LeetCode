class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        const int &n = nums.size(); 
        int pos = (nums[0] > 0); 
        int neg = (nums[0] < 0); 
        int ans = pos;
        for (int i=1; i<n; ++i) {
            if (nums[i] > 0) {
                pos += 1; 
                neg += (neg>0) ? 1 : 0; 
            } else if (nums[i] < 0) {
                int temp = pos; 
                pos = (neg>0) ? 1 + neg : 0; 
                neg = temp + 1; 
            } else {
                pos = neg = 0; 
            }
            ans = max(ans , pos);
        }
        return ans; 
    }
};
