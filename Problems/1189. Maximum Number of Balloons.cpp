class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int>freq; 
        for (auto&ch:text) {
            freq[ch]++;
        }
        return min({freq['b'],freq['a'], freq['l']/2, freq['o']/2,freq['n']});
    }
};
