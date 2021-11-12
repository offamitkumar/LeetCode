class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int ans{}, temp{}; 
        for (auto&itr:nums) {
            temp+=itr; 
            ans = min(ans, temp); 
        }
        return abs(ans)+1; 
    }
};
