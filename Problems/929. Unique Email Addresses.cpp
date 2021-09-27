class Solution {
    string refactor(const string &s) {
        string res{}; 
        bool foundat = false;
        bool Plus = false; 
        for (int i=0; i<(int)s.size(); ++i) {
            if (s[i] == '.' && (!foundat)) {
                continue;
            }
            if (s[i] == '+' && (!foundat)) {
                while (s[i] != '@') {
                    ++i; 
                }
            }
            if (s[i] == '@') {
                foundat = true; 
            }
            res += s[i]; 
        }
        return res; 
    }
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string>s; 
        for (auto&itr:emails) {
            s.insert(refactor(itr)); 
        }
        return (int)s.size();
    }
};
