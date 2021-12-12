class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int counter{}, current_element = nums[0], ans{}; 
        for (auto&itr:nums) {
            counter += (current_element == itr) ? 1 : -1; 
            if (counter == 0) {
                current_element = itr; 
                counter+=1; 
            }
        }
        return current_element; 
    }
};
