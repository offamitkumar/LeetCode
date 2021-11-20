class Solution {
public:
    bool hasAlternatingBits(int n) {
        int last=-1; 
        while(n) {
            if (last == n%2) 
                return false; 
            last= n%2; 
            n/=2; 
        }
        return true; 
    }
};
