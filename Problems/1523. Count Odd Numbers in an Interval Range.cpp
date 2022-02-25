class Solution {
public:
    int countOdds(int low, int high) {
        int f1 = ceil(double(high)/2.0); 
        int f2 = ceil(double(low)/2.0); 
        return f1-f2; 
    }
};
