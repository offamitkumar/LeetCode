class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n); 
        if (is_sorted(s.begin(), s.end(), greater<char>()))
            return -1; 
        next_permutation(s.begin(), s.end()); 
        int64_t res = stoll(s); 
        if (INT_MAX < res || res == n) {
            return -1; 
        }
        return res; 
    }
};
