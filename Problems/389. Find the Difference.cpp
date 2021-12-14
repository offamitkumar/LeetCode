class Solution {
public:
    char findTheDifference(string s, string t) {
        int i=0, j=0; 
        sort(s.begin(), s.end()); 
        sort(t.begin(), t.end()); 
        const int&n = s.size(); 
        const int&m = t.size(); 
        while (i<n and j<m) {
            if (s[i] != t[j]) {
                return t[j];
            }
            ++i;
            ++j; 
        }
        return t[j];
    }
};
