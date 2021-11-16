class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int>num; 
        int fact{1}; 
        for(int i=1; i<n; ++i) {
            fact*=i; 
            num.push_back(i); 
        }
        num.push_back(n); 
        string ans{}; 
        k-=1; 
        while(true) {
            ans += to_string(num.at(k/fact)); 
            num.erase(num.begin()+k/fact); 
            if (num.size() == 0) {
                break;
            }
            k%=fact; 
            fact/=num.size(); 
        }
        return ans; 
    }
};
