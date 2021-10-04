class Solution {
    public:
        int climbStairs(int n) {
            if ( n==1) {
                return 1; 
            } else if (n==2) {
                return 2; 
            }
            int b = 1 , a = 2; 
            for (int i=2; i<n; ++i) {
                int temp = a+b; 
                b = a; 
                a = temp; 
            }
            return a;
        }
};
