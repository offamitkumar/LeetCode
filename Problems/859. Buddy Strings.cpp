class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.size() != goal.size()) return false; 
        if (s == goal) {
            return (set<char>(s.begin(), s.end()).size() < s.size()); 
        }
        int l = 0 , r = s.size()-1; 
        while (l<r && s[l] == goal[l]) {
            ++l; 
        }
        while (r>=0 && s[r] == goal[r]) {
            --r; 
        }
        if (l < r) swap(s[l] , s[r]); 
        return goal == s; 
    }
};
