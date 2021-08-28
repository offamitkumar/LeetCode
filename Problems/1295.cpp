class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int counter{};
        for(auto itr:nums){
            counter+=((to_string(itr).size())%2==0);
        }
        return counter;
    }
};
