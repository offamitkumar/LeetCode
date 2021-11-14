class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry{}; 
        const int&n = digits.size(); 
        for (int i=n-1; i>=0; --i) {
            carry += digits.at(i); 
            if (i == n-1) carry+=1; 
            digits.at(i) = carry%10; 
            carry/=10; 
        }
        if (carry) {
            digits.insert(digits.begin(), carry); 
        }
        return digits; 
    }
};

