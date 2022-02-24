class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        long long x = 3; 
        vector<long long>ans; 
        if (num%x==0) { 
            ans.push_back(num/x-1ll); 
            ans.push_back(num/x); 
            ans.push_back(num/x+1ll); 
        }
        return ans; 
    }
};
