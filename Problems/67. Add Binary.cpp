class Solution {
public:
    string addBinary(string a, string b) {
        int carry{}; 
        string ans{}; 
        int i = a.size()-1, j =b.size()-1; 
        while(i>=0 and j>=0) {
            carry += int(int(a[i]-'0') + int(b[j]-'0'));
            ans.push_back(char(carry%2+'0')); 
            carry/=2; 
            --i;
            --j; 
        }
        while (i>=0) {
            carry += int(a[i]-'0'); 
            ans.push_back(char(carry%2+'0')); 
            carry/=2; 
            --i; 
        }
        while (j>=0) {
            carry += int(b[j]-'0'); 
            ans.push_back(char(carry%2+'0')); 
            carry/=2; 
            --j; 
        }
        if (carry)
            ans.push_back(char(carry%2+'0')); 
        reverse(ans.begin(), ans.end()); 
        return ans; 
    }
};
