class Solution {
public:
    bool detectCapitalUse(string word) {
        if (all_of(word.begin(), word.end(), [](char ch) {
                  return ch>='A' && ch<='Z';})){
            return true; 
        }
        if (all_of(word.begin()+1, word.end(), [](char ch) {
                  return ch>='a' && ch<='z';})){
            return true; 
        }
        return false; 
    }
};
