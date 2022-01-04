class Solution {
public:
    int bitwiseComplement(int n) {
        if (!n) return 1; 
        int ans{},i{}; 
        while (n) {
            if ((n&1)==0) {
                ans|=(1<<i); 
            }
            ++i; 
            n>>=1; 
        }
        return ans; 
    }
};
