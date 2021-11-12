class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0]; 
        for (int i=1; i<strs.size(); ++i) {
            int j=0; 
            while (strs[i][j] == ans[j] && j<ans.size() && j<strs[i].size())
                ++j; 
            ans = strs[i].substr(0,j); 
        }
        return ans; 
    }
};
