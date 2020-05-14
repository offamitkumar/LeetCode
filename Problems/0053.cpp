class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        bool flag=false;
        int sum{},temp_sum{};
        for(auto&itr:nums){
            temp_sum+=itr;
            if(temp_sum<0){
                temp_sum=0;
            }
            if(flag==false and temp_sum>sum){
                flag = true;
            }
            sum=max(temp_sum,sum);
        }
        if(!flag){
            return *max_element(nums.begin(),nums.end());
        }else{
            return sum;
        }
    }
};
