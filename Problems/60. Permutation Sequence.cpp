class Solution {
public:
    string getPermutation(int n, int k) {
        string res{}; 
        for (int i=0; i<n; ++i) {
            res+=to_string(i+1); 
        }
        while (--k) {
            next_permutation(res.begin(), res.end()); 
        }
        return res; 
    }
};
