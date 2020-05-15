class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i = 0 , j = 0;
        map<int,int>frequency;
        int n= (int)nums.size();
        for(;j<n; ++j){
            if(j-i>k){
                frequency.erase(nums[i++]);
            }
            if(frequency.find(nums[j])!=frequency.end()){
                return true;
            }else{
                frequency[nums[j]]++;
            }
        }
        return false;
    }
};
