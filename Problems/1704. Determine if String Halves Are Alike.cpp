class Solution {
    bool is_vow(char c) {
        c = char(tolower(c));
        string s = "aeiou";
        if(s.find(c)!=string::npos) {
            return true;
        } else {
            return false; 
        }
    }
public:
    bool halvesAreAlike(string s) {
        int vow{}, con{}; 
        for (int i=0; i<s.size()/2; ++i) {
            if (is_vow(s[i])) {
                vow++;
            } else {
                con++;
            }
        }
        for (int i=s.size()/2; i<s.size(); ++i) {
            if (is_vow(s[i])) {
                vow--;
            } else {
                con--;
            }
        }
        return vow==0 && con==0;
    }
};
