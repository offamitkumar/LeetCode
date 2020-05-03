class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0];
        int tempsum{};
        for(int i=0;i<(int)nums.size();++i){
            tempsum+=(nums.at(i));
            if(tempsum>sum){
                sum = tempsum;
            }
            if(tempsum<0){
                tempsum = 0;
            }
        }
        return sum;
    }
};
