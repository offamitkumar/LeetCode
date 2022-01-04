class Solution {
public:
    int findComplement(int num) {
        int res{},i{}; 
        while (num) {
            if (!(num&1)) {
                res|=(1<<i); 
            }
            ++i;
            num>>=1;
        }
        return res; 
    }
};
