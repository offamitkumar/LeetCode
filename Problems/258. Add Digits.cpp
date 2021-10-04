class Solution {
    public:
        int addDigits(int num) {
            string s = to_string(num); 
            int sum{};
            for (auto&itr:s) {
                sum+=(itr-'0');
            }
            if (sum%9==0 && sum) {
                return 9;
            } else {
                return sum%9; 
            }
        }
};
