class Solution {
public:
    int findLUSlength(const string& a, const string& b) {
        return a==b?-1:max(a.size(),b.size());
    }
};
