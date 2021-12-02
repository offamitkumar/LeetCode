class Solution {
    bool check(string&a, string&b) {
        if (a.size() != b.size()) return false; 
        map<char,char>mp, rmp; 
        const int &n = a.size(); 
        for (int i=0; i<n; ++i) {
            if (mp.find(b[i]) == mp.end() && rmp.find(a[i])==rmp.end()) {
                mp[b[i]] = a[i]; 
                rmp[a[i]] = b[i]; 
            } else {
                if (mp[b[i]] != a[i] || rmp[a[i]] != b[i]) {
                    return false; 
                }
            }
        }
        return true; 
    }
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>res; 
        for (auto&w:words) {
            if (check(w, pattern)) {
                res.push_back(w); 
            }
        }
        return res; 
    }
};
