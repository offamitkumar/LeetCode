class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int,int>dp;
        dp[0] = -1;
        int counter{} , max_counter{};
        for(int i=0;i<(int)nums.size();++i){
            if(nums[i]){
                counter++;
            }else{
                counter--;
            }
            if(dp.find(counter)!=dp.end()){
                max_counter = max(max_counter , i - dp[counter]);
            }else{
                dp[counter] =i;
            }
        }
        return max_counter;
    }
};
