class Solution {
    bool isVowel(char ch) {
        vector<char>v = {'a','e','i' ,'o','u'}; 
        for(auto&itr:v) {
            if (itr == char(tolower(ch))) {
                return true;
            }
        }
        return false;
    }
public:
    string reverseVowels(string s) {
        int i = 0 , j = s.length()-1; 
        while (i<j) {
            while (i<j && isVowel(s[i]) == false) {
                i++;
            }
            while (i<j && isVowel(s[j]) == false) {
                --j;
            }
            if (i<j)
                swap(s[i] , s[j]);
            ++i; 
            --j;
        }
        return s;
    }
};
