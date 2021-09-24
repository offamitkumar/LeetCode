class Solution {
    vector<int>val;
    vector<int>pre; 
    int n; 
    array<array<int,501>,501>dp; 
    int brute(int left , int right) {
        if (dp[left][right] != -1) {
            return dp[left][right];
        }
        if (left == right) {
            return 0; 
        }
        int total{pre.at(right)-pre.at(left)+val.at(left)};
        int l{};
        int ans = 0;
        for (int i=left; i<right; ++i) {
            total-=val[i]; 
            l+=val[i]; 
            if(total == l) {
                ans = max( l+brute(left , i), ans); 
                ans = max (ans , total+brute(i+1 , right)); 
            } else if (total > l) {
                ans = max(ans, l+brute(left , i)); 
            } else {
                ans = max(ans, total+brute(i+1, right)); 
            }
        }
        dp[left][right] = ans; 
        return ans; 
    }
    public:
    int stoneGameV(vector<int>& stoneValue) {
        val.clear(); 
        for (int i=0; i<501; ++i) {
            for (int j=0; j<501; ++j) {
                dp[i][j] = -1; 
            }
        }
        pre.clear(); 
        n = 0; 
        n = stoneValue.size();
        val.resize(n); 
        pre.resize(n);
        for (int i=0; i<n; ++i) {
            val[i] = stoneValue[i];
            if (i==0) {
                pre[i] = stoneValue[i]; 
            } else {
                pre[i] = pre[i-1]+stoneValue[i];
            }
        }
        return brute(0 , n-1); 
    }
};
