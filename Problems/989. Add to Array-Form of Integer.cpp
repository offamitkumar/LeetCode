class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry{}; 
        const int &n = num.size(); 
        for (int i=n-1; i>=0; --i) {
            carry += num[i] + k%10; 
            k/=10; 
            num[i] = carry%10; 
            carry/=10; 
        }
        while (k) {
            carry += k%10; 
            k/=10; 
            num.insert(num.begin(),carry%10); 
            carry/=10; 
        }
        if (carry) {
            num.insert(num.begin(),carry); 
        }
        return num; 
    }
};
