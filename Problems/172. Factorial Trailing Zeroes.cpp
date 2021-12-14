class Solution {
public:
    int trailingZeroes(int n) {
        int counter{}; 
        int num=5; 
        while (num<=n) {
            counter += (n/num); 
            num*=5; 
        }
        return counter; 
    }
};

