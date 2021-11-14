class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans{}; 
        int i=0; 
        while (i < (int)s.size()) {
            int counter{}; 
            while (i<s.size() && isalpha(s[i])) {
                counter++; 
                ++i; 
            }
            if (counter) ans = counter; 
            ++i; 
        }
        return ans; 
    }
};

