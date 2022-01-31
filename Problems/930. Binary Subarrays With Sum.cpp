class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int counter{}; 
        unordered_map<int,int>mp; mp[0] = 1; 
        int sum{}; 
        for (auto&itr:nums) {
            sum+=itr; 
            counter += mp[sum-goal]; 
            mp[sum]++; 
        }
        return counter; 
    }
};
