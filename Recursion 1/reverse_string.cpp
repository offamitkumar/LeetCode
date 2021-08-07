class Solution {
public:
    void reverseString(vector<char>& s , int i = 0) {
        int n = s.size();
        if ( i == n / 2) {
            return; 
        }
        swap(s[i] , s[n-i-1]); 
        reverseString(s , i+1); 
    }
};
