class Solution {
public:
    int hammingDistance(int x, int y) {
        int counter{}; 
        while (x || y) {
            counter += (x%2 != y%2); 
            x/=2; 
            y/=2; 
        }
        return counter; 
    }
};
