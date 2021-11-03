class Solution {
    int get (int &l , int &r, string &s) {
        while (l>=0 && r<s.size() && s[l] == s[r]) {
            l--; 
            r++; 
        }
        return r-l-1; 
    }
public:
    string longestPalindrome(string s) {
        if (s.size() <=1) {return s; }
        const int &n =s.size(); 
        int maxlen{1} , st=0; 
        for (int i=0; i<n; ++i) {
            int l = i , r = i; 
            int odd = get(l,r,s); 
            if (odd > maxlen) {
                maxlen = odd; 
                st = l+1; 
            }
            l = i , r = i+1; 
            int even = get(l ,r, s); 
            if (even > maxlen) {
                maxlen = even; 
                st = l+1; 
            }
        }
        return s.substr(st, maxlen); 
    }
};

