class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x;
        bool ok = true;
        for(auto&itr:nums){
            if(ok){
                ok = false;
                x =itr;
            }else{
                x^=itr;
            }
        }
        return x;
    }
};
