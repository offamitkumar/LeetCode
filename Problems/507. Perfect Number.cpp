class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num == 1) return false;
        int sum{1}; 
        const int &sqt = sqrt(num); 
        for (int i=2;  i<=sqt; ++i) {
            if (num%i == 0) {
                sum += i; 
                if (num/i != i) {
                    sum += (num/i); 
                }
            }
        }
        return sum == num; 
    }
};
