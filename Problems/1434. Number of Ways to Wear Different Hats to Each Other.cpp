class Solution {
    int n; 
    vector<vector<int>>v;
    vector<vector<int>>dp;
    int mod=1e9+7;
    int brute(int mask , int hat) {
        if (mask == (1<<n)-1) {
            return 1;
        }
        if  (hat == 41) {
            return 0;
        }
        if (dp[mask][hat]!=-1) {
            return dp[mask][hat];
        }
        int ans = brute(mask , hat+1); 
        ans%=mod;
        for (auto&itr:v[hat]) {
            if(!(mask&(1<<itr))) {
                ans+=brute(mask|(1<<itr), hat+1);
                ans%=mod;
            }
        }
        ans%=mod;
        dp[mask][hat] = ans; 
        return ans;
    }
public:
    int numberWays(vector<vector<int>>& hats) {
        n = hats.size();
        v.resize(50); 
        dp.resize(1030, vector<int>(50 ,-1));
        for (int i=0; i<n; ++i) {
            for (int j=0; j<hats[i].size(); ++j) {
                v[hats[i][j]].push_back(i);
            }
        }
        return brute(0, 1)%mod;
    }
};
