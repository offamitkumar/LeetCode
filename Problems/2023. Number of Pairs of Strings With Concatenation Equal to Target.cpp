class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int counter{}; 
        map<string , int> mp; 
        for (int i=0; i<nums.size(); ++i) {
            if (target.size() >= nums[i].size() && target.substr(0, nums[i].size()) == nums[i]) {
                counter+=mp[target.substr(nums[i].size())]; 
            }
            mp[nums[i]]++; 
        }
        mp.clear(); 
        for (int i=nums.size()-1; i>=0; --i) {
            if (target.size() >= nums[i].size() && target.substr(0, nums[i].size()) == nums[i]) {
                counter+=mp[target.substr(nums[i].size())]; 
            }
            mp[nums[i]]++; 
        }
        return counter; 
    }
};
