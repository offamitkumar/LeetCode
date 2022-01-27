class Solution {
    vector<string>res; 
    bool isValid(string r) {
        if (r.size() == 0 || r.size() >=4) return false; 
        if (r[0] == '0' && r.size() >= 2) return false; 
        if (stoi(r) > 255) return false; 
        return true; 
    }
    void dfs(string &s, int till , string r, int level) {
        if (level == 0) {
            res.push_back(r); 
            return; 
        }
        if (till >= s.size()) return; 
        if(r.size())
            r+="."; 
        int temp = 1; 
        if (level == 1) {
            int remain = s.size() - till+1; 
            if (isValid(s.substr(till,remain))){
                dfs(s, temp, r+s.substr(till, remain), level-1); 
            }
            return; 
        }
        while (temp<=3) {
            if (isValid(s.substr(till,temp))) {
                dfs(s, till+temp, r+s.substr(till,temp),level-1); 
            }
            temp++; 
        }
    }
public:
    vector<string> restoreIpAddresses(string s) {
        res.clear(); 
        string r; 
        dfs(s, 0, r, 4); 
        return res; 
    }
};
