class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        const int &n = shifts.size(); 
        int total_shift= 0;
        for (int i =n-1; i>=0; --i) {
            total_shift += shifts[i];
            total_shift%=26;
            s[i] = char(((int(s[i]-'a') + total_shift)%26)+'a');
        }
        return s;
    }
};
