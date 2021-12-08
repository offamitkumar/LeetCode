class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int>v(32); 
        for(auto&itr:nums) {
            for (int i=0; i<32; ++i) {
                v[i] += ((itr & (1<<i))!=0); 
            }
        }
        int res{}; 
        for (int i=0; i<32; ++i) {
            v[i]%=3; 
            if (v[i])
                res |= (1<<i); 
        }
        return res; 
    }
};
