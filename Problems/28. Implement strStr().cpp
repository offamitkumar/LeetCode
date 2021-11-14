class Solution {
    vector<int> make_t(const string &pat) {
        const int &n= pat.size(); 
        vector<int>table(n,0); 
        for (int i=1; i<n; ++i) {
            int j = table[i-1]; 
            while (j>0 and pat.at(i) != pat.at(j)) {
                j = table[j-1]; 
            }
            if (pat.at(i) == pat.at(j)) {
                ++j; 
            }
            table.at(i) = j; 
        }
        return table;
    }
public:
    int strStr(string haystack, string needle) {
        if (needle.size() == 0) return 0; 
        if (needle.size()>=haystack.size()) {
            if (needle.size()>haystack.size()) {
                return -1; 
            } 
            if (needle == haystack) return 0; 
            return -1; 
        } else {
            vector<int> table = make_t(needle); 
            int i=0, j=0; 
            while (i<haystack.size()) {
                if (haystack[i] == needle[j]) {
                    ++i; 
                    ++j; 
                } else {
                    if (j!=0) 
                        j = table[j-1];
                    else 
                        ++i; 
                }
                if (j == needle.size()) {
                    return i-j; 
                }
            }
            return -1; 
        }
    }
};
