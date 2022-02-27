class Solution {
    int gcd(int a, int b){ 
        if (a == 0) {
            return b; 
        }
        if (a > b) swap(a,b); 
        return gcd (b , b%a); 
    }
public:
    long long countPairs(vector<int>& nums, int k) {
        long long ans{}; 
        map<int64_t ,int64_t>mp; 
        for (auto&itr:nums) {
            int64_t g1 = __gcd(itr, k); 
            for (auto&it:mp) {
                if (g1 * it.first % k == 0) {
                    ans += it.second; 
                }
            }
            mp[g1]++; 
        }
        return ans; 
    }
};
