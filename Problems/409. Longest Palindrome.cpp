class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>freq; 
        for (auto&itr:s) {
            freq[itr]++; 
        }
        int counter{}; 
        bool firstTime = true; 
        for (auto&itr:freq) {
            counter += (((itr.second&1)==0) || firstTime) ? itr.second : (itr.second-1); 
            firstTime &= ((itr.second&1) == 1) ? 0 : 1; 
        }
        return counter;
    }
};
