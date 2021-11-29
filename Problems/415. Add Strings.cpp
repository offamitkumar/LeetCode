class Solution {
public:
    string addStrings(string num1, string num2) {
        string res{}; 
        int n = num1.size(); 
        int m = num2.size(); 
        int carry{}, i=n-1, j=m-1; 
        while (i>=0 && j>=0) {
            carry += int(num1[i--]-'0') + int(num2[j--]-'0');
            res += to_string(carry%10); 
            carry/=10; 
        }
        while (i>=0) {
            carry += int(num1[i--]-'0');
            res += to_string(carry%10); 
            carry/=10; 
        }
        while (j>=0) {
            carry += int(num2[j--]-'0');
            res += to_string(carry%10); 
            carry/=10; 
        }
        if (carry) {
            res += to_string(carry); 
        }
        reverse(res.begin(), res.end()); 
        return res; 
    }
};
