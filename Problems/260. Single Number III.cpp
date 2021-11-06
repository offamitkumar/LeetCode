class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int first_num = 0; 
        for_each(nums.begin(),nums.end(),[&first_num](int x) {first_num^=x;}); 
        int bit_diff = 0; 
        for (int i=0; i<32; ++i) {
            if (first_num&(1<<i)) {
                bit_diff = i; break; 
            }
        }
        int second_num=0; 
        for_each(nums.begin(),nums.end(),[&bit_diff,&second_num](int x) {
                    if (x&(1<<bit_diff)){
                        second_num^=x;
                    }
                }
                ); 
        return {first_num^second_num,second_num};
    }
};

