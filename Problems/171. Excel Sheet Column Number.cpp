class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res{}; 
        for (auto&itr:columnTitle) {
            res = res * 26 + (itr-'A'+1); 
        }
        return res; 
    }
};
