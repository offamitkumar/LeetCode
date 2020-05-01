class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            long long num =0;
            for(int i=0;i<(int)nums.size();++i){
                num^=nums[i];

            }
            return num;

        }

};
