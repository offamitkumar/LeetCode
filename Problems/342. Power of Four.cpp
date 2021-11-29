class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n>0) {
            return n && (!((n+1)&n)) && (!(n&0xAAAAAAAA)); 
        } else {
            return n && (!((n-1)&n)) && (!(n&0xAAAAAAAA)); 
        }
    }
};
