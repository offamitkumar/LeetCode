class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        const int&n = nums.size(); 
        vector<int>l(n+1), r(n+1); 
        for (int i=1; i<=n; ++i) {
            if (nums[i-1] == 0) {
                l[i]+=1; 
            }
            l[i] += l[i-1]; 
        }
        for (int i=n-1;i>=0; --i) {
            if (nums[i] == 1) {
                r[i]+=1; 
            }
            r[i]+=r[i+1]; 
        }
        vector<int>ans; 
        int mx{}; 
        for (int i=0; i<=n; ++i) {
            mx = max(mx , l[i] +r[i]); 
        }
        for (int i=0; i<=n; ++i) {
            if (mx == l[i] + r[i]) {
                ans.push_back(i); 
            }
        }
        return ans; 
    }
};
