class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        map<char,int>m; 
        int n = s1.size(); 
        int counter{}; 
        for (int i=0; i<n; ++i) {
            m[s1[i]]++; 
            m[s2[i]]--; 
            if (s1[i] != s2[i]) {
                counter++; 
            }
        }
        if ((counter == 0 || counter == 2) && all_of(m.begin(), m.end(), [](pair<int,int>m1) { return m1.second == 0; })) {
            return true; 
        } else {
            return false; 
        }
    }
};
