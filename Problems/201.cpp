class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int counter{}; 
        while (left != right) {
            left>>=1; 
            right>>=1;
            ++counter;
        }
        return (left<<counter);
    }
};
