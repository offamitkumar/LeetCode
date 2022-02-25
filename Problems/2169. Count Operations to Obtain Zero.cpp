class Solution {
public:
    int countOperations(int num1, int num2) {
        int ops{}; 
        while (num1 && num2) {
            if (num1>num2) {
                num1-=num2; 
            } else {
                num2-=num1; 
            }
            ops++; 
        }
        return ops;
    }
};
