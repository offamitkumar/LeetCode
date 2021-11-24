class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans{}; 
        while (columnNumber) {
            int remain = columnNumber%26; 
            remain = (remain==0) ? 25 : remain-1; 
            ans = char(remain+'A') + ans; 
            columnNumber = (columnNumber - remain + 1) / 26; 
        }
        return ans; 
    }
};
