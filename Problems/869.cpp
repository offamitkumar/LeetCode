class Solution {
    bool check(const string &a, string b) {
        sort(b.begin(),b.end()); 
        return a==b;
    }
    public:
        bool reorderedPowerOf2(int N) {
            string s = to_string(N); 
            sort(s.begin(),s.end()); 
            int64_t i = 1; 
            while ( i < (1ll<<31ll)) {
                if (check(s , to_string(i))) {
                    return true;
                }
                i = i<<1; 
            }
            return false;
        }
};
