class Solution {
public:
    bool isUgly(int n) {
        for (const auto&itr:{2,3,5}) {
            while (n && n%itr==0) {
                n/=itr; 
            }
        }
        return n==1; 
    }
};
