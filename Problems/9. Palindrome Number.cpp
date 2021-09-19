class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) {
            return 0;
        }
        int temp = x , newNum = 0;
        while (temp) {
            newNum *= 10;
            newNum += temp%10;
            temp/=10;
        }
        return newNum == x;
    }
};
