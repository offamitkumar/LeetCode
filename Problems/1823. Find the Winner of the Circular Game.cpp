class Solution {
    int helper(int n, int k) {
        if (n == 1) {
            return 0; 
        }
        int y = helper(n-1,k); 
        return (y+k)%n; 
    }
public:
    int findTheWinner(int n, int k) {
        if (k>n) {
            k%=n; 
        }
        return helper(n,k)+1; 
    }
};
