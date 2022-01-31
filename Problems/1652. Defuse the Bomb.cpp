class Solution {
    int get1(vector<int>&code , int i , int k) {
        const int&n = code.size(); 
        int sum{}; 
        while (k--) {
            i = (i+n+n)%n; 
            sum+=code[i--]; 
        }
        return sum; 
    }
    int get2(vector<int>&code , int i , int k) {
        const int&n = code.size(); 
        int sum{}; 
        while (k--) {
            i = (i+n+n)%n; 
            sum+=code[i++]; 
        }
        return sum; 
    }
public:
    vector<int> decrypt(vector<int>& code, int k) {
        const int &n = code.size(); 
        vector<int>ans(n); 
        if (k < 0) {
            for (int i=0; i<n; ++i) {
                ans[i] = get1(code, i-1, k); 
            }
        } else if (k>0){
            for (int i=0; i<n; ++i) {
                ans[i] = get2(code, i+1, k); 
            }
        }
        return ans; 
    }
};
