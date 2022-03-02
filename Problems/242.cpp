class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) {
            return false; 
        }
        array<int , 26> f = {0}; 
        for (int i=0; i<int(s.length()); ++i) {
            f[s[i]-'a']++;
            f[t[i]-'a']--;
        }
        return all_of(f.begin(),f.end() , [](bool x) {return x == 0;}); 
    }
};
