class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0 , j =0;
        const int n = (int)s.size();
        const int m = (int)t.size();
        if(n>m)return false;
        while(i<n && j < m){
            if(s[i] == t[j]){
                ++j;
                ++i;
                continue;
            }
            ++j;
        }
        return i==n;
    }
};
