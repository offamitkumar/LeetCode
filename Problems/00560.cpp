class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int counter{};
        unordered_map<int , int>pref;pref[0] =1;
        int sum_till{};
        for(auto&itr:nums){
            sum_till+=itr;
            counter+=pref[sum_till-k];
            pref[sum_till]++;
        }
        return counter;
    }
};
