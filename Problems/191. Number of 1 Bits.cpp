class Solution {
public:
    int hammingWeight(uint32_t n) {
        int counter{}; 
        while (n) {
            counter ++; 
            n = n & (n-1); 
        }
        return counter; 
    }
};
