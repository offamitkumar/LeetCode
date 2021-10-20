class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        const int &n = nums.size(); 
        vector<int>v(n+1);
        int len = 0; 
        function<int(int)> b_search = [&v,&len](int num) {
            int high = len-1, low = 0; 
            int ans; 
            while (low <= high) {
                int mid = (high + low) / 2; 
                if (v[mid] < num) {
                    low = mid + 1;
                } else {
                    high = mid-1; 
                }
            }
            return low;
        };
        for (int i=0; i<n; ++i) {
            if (i==0 || v[len-1] < nums[i]) {
                v[len++] = nums[i];
            } else {
                int x = b_search(nums[i]);
                v[x] = nums[i];
            }
        }
        return len; 
    }
};
