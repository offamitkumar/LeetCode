class Solution {
    bool single, multiple; 
    bool include{}; 
    string clean(const string&s) {
        string res{}; 
        const int&n = s.size(); 
        for (int i=0; i<n; ++i) {
            if (s[i] == '/' && i+1<n && (!multiple)) {
                if (s[i+1] == '/') {
                    return res; 
                } else if (s[i+1] == '*') {
                    ++i; 
                    multiple = true; 
                    include = false; 
                    continue; 
                } 
            }
            if (s[i] == '*' && i+1<n && multiple) {
                if (s[i+1] == '/') {
                    multiple = false; 
                    ++i; 
                    continue; 
                }
            }
            if (!multiple)
                res += s[i]; 
        }
        return res; 
    }
public:
    vector<string> removeComments(vector<string>& source) {
        single = false; 
        multiple = false; 
        include = true;
        vector<string>res; 
        string temp{}; 
        for (auto&itr:source) {
            string s = clean(itr); 
            if (multiple) {
                if (s.size()) {
                    temp+=s; 
                }
            } else {
                if (s.size() + temp.size() != 0)
                    res.push_back(temp+s); 
                temp=""; 
                include = true; 
            }
        }
        return res; 
    }
};
