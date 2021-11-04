class Solution {
    bool check(string s, int l , int r) {
        while (l<r && s[l] == s[r]) { l++, r--; }
        if (l>=r) { return true; }
        else {
            return false; 
        }
    }
public:
    bool validPalindrome(string s) {
        int l = 0 , r = s.size()-1; 
        while (l<r && s[l] == s[r]) { l++, r--; }
        if (l>=r) return true; 
        else {
            return check(s,l+1,r) || check(s,l,r-1); 
        }
    }
};


