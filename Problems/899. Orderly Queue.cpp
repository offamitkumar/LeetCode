class Solution {
public:
    string orderlyQueue(string s, int k) {
        if (k>1) {
            sort(s.begin(), s.end()); 
            return s;
        } else {
            string ans = s;
            s += s; 
            for (int i=0; i<int(ans.size()); ++i) {
                if (s.substr(i, ans.size()) < ans) {
                    ans = s.substr(i,ans.size());
                }
            }
            return ans;
        }
    }
};
