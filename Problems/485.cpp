class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans{} , temp{}; 
        for (auto&itr:nums) {
            temp+=(itr); 
            ans = max(ans , temp); 
            if(!itr)temp=0;
        }
        return ans;
    }
};
