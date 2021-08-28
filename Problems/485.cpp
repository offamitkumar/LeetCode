class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_{} , t{}; 
        for(int i=0; i<(int)nums.size(); ++i){
            if(nums[i]){
                t++; 
            }else{
                if(t > max_){
                    max_ = t;
                }
                t = 0;
            }
        }
        if(t > max_){
            max_ = t;
        }
        return max_;
    }
};
