class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        const int&n = questions.size(); 
        long long best{}; 
        vector<long long>ans(n); 
        for (int i=n-1; i>=0; --i) {
            ans[i] = questions[i][0]; 
            if (i+questions[i][1]+1 < n) {
                ans[i] += ans[i+questions[i][1]+1]; 
            }
            best = max(ans[i], best); 
            ans[i] = best; 
        }
        return ans[0]; 
    }
};
