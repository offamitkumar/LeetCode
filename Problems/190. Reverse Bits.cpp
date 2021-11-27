class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res{}; 
        int left = 0, right = 31; 
        while (right >= 0) {
            if (n & ((uint32_t)1 << left)) {
                res |= ((uint32_t)1<< right); 
            }
            right--; 
            left ++; 
        }
        return res; 
    }
};
