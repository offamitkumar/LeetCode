class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        vector<int>prime{2,3,5,7,11,13,17,19}; 
        bitset<20> bits; 
        for (auto&itr:prime) {
            bits.set(itr); 
        }
        int counter{}; 
        for (int i=left; i<=right; ++i) {
            if (bits[__builtin_popcount(i)]) {
                ++counter; 
            }
        }
        return counter; 
    }
};


