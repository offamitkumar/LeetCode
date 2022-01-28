class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int maxG{}; 
        const int&n = nums.size(); 
        int mn=INT_MAX, mx=INT_MIN; 
        for (auto&itr:nums) {
            mn = min(mn , itr); 
            mx = max(mx , itr); 
        }
        if (n < 2 || mx == mn) return 0; 
        int asize = ceil(double(mx-mn)/(n-1));
        vector<int>up(n-1, INT_MIN), down(n-1, INT_MAX); 
        for (auto&itr:nums) {
            if (itr == mn or itr == mx) continue; 
            int idx = (itr - mn) / asize; 
            up[idx] = max(itr, up[idx]); 
            down[idx] = min(itr, down[idx]); 
        }
        for (int i=0; i<n-1; ++i) {
            if (down[i] != INT_MAX)
                maxG = max(maxG, down[i]-mn); 
            if (up[i] != INT_MIN)
                mn = up[i]; 
        }
        maxG = max(maxG, mx - mn); 
        return maxG; 
    }
};
