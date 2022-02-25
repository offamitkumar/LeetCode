class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        sort(beans.begin(), beans.end()); 
        long long sum = accumulate(beans.begin(), beans.end(), 0ll); 
        const long long&n = beans.size(); 
        long long ans{LLONG_MAX}; 
        for (long long i=0; i<n; ++i) {
            ans = min(ans , sum - (n - i) * beans[i]); 
        }
        return ans; 
    }
};
