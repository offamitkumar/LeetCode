class Solution {
    vector<vector<string>>res; 
    bool palin(const string&s) {
        int i=0 , l = s.size()-1; 
        while (i < l) {
            if (s[i] != s[l]) {
                return false; 
            }
            ++i; 
            --l; 
        }
        return true; 
    }
    void brute(string&s, int n, vector<string>&temp) {
        if (n >= s.size()) {
            res.push_back(temp); 
            return; 
        }
        for (int i=1; i+n<=s.size(); ++i) {
            if (palin(s.substr(n,i))) {
                temp.push_back(s.substr(n,i)); 
                brute(s, n+i, temp); 
                temp.pop_back(); 
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        vector<string>temp; 
        brute(s, 0, temp); 
        return res; 
    }
};
