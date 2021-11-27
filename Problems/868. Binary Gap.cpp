class Solution {
public:
    int binaryGap(int n) {
        int ans{}, counter{}; 
        bool first = false; 
        while (n) {
            if (n&1) first = true; 
            if ((n&1) == 1) {
                ans = max(ans , counter); 
                counter = 0; 
            }
            if (first) {
                ++counter; 
            }
            n>>=1; 
        }
        return ans; 
    }
};
