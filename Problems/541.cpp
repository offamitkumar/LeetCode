class Solution {
public:
    string reverseStr(string s, int k) {
        int i =0; 
        while (i<s.length()) {
            int j = min (i+k-1 , (int)s.length()-1); 
            int temp = j; 
            while (j>i) {
                swap(s[i] , s[j]); 
                ++i , --j; 
            }
            i = temp; 
            i+=k+1; 
        }
        return s;
    }
};
