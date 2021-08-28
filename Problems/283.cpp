class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start = -1 , end = 0;
        while(end<(int)nums.size()){
            if(start!=-1 && nums[end] != 0){
                swap(nums[start] , nums[end]);
                while(start<(int)nums.size() && nums[start]!=0){
                    ++start;
                }
            }
            if(start==-1 && nums[end] == 0){
                start = end;
            }
            end++;
        }
    }
};
