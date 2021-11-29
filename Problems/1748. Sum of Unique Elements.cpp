class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int>mp; 
        for (auto&itr:nums) {
            mp[itr]++; 
        }
        int sum{};
        for (auto&itr:mp) { 
            if (itr.second == 1) {
                sum+=itr.first; 
            }
        }
        return sum; 
    }
};
