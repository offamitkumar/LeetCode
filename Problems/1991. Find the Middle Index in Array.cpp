class Solution {
    public:
        int findMiddleIndex(vector<int>& nums) {
            int n = nums.size();
            vector<int> lsum(n+4); 
            for(int i=1; i<=n; ++i) {
                lsum[i]+= lsum[i-1]+nums[i-1];
            }
            vector<int> rsum(n+4); 
            for(int i=n; i>=1; --i) {
                rsum[i]+= rsum[i+1]+nums[i-1];
            }
            int ans = INT_MAX;
            for (int i=1; i<=n;  ++i){
                if (lsum[i-1] == rsum[i+1]) {
                    ans = min(ans , i-1);
                }
            }
            if(ans==INT_MAX) ans =-1;
            return ans; 
        }
};
