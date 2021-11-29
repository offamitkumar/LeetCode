class Solution {
public:
    int numDifferentIntegers(string word) {
        int res{}; 
        map<string,int>mp; 
        int i=0, n = word.size(); 
        while (i<n) {
            if (word[i] >='a' && word[i] <='z') {
                ++i; continue; 
            } else {
                while (word[i] == '0') {
                    ++i; 
                }
                string r{}; 
                while (word[i]>='0' && word[i]<='9') {
                    r += word[i]; 
                    ++i; 
                }
                mp[r]++; 
            }
        }
        return mp.size(); 
    }
};
