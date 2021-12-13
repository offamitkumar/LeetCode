class Solution {
public:
    int countPrimes(int n) {
        vector<bool>prime(n+1, true); 
        int counter{}; 
        for (int i=2; i<n; ++i) {
            if (prime[i]) {
                counter++; 
                for (int64_t j=i; j*i<=n; ++j) {
                    prime[j*i] =false; 
                }
            }
        }
        return counter; 
    }
};
