class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if (k%2==0 || k%5==0) return -1; 
        int rem{};
        for (int n=1; n<=k; ++n) {
            if ((rem*10+1)%k==0){
                return n; 
            }
            rem = (rem*10+1)%k; 
        }
        return -1; 
    }
};
