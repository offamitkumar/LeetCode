class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end()); 
        sort(s.begin(), s.end()); 
        int counter{}; 
        int j = 0; 
        for (int i=0;j<g.size() and i<s.size(); ++i) {
            if (s[i] >= g[j]) {
                ++j; 
                ++counter; 
            }
        }
        return counter; 
    }
};
