class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for(auto&itr:nums) {
            if (itr>=n or itr<0) {
                itr = n+100;
            }
        }
        for(int i=0; i<n; ++i) {
            if (nums.at(i) < n) {
                int x = abs(nums.at(i)); 
                nums.at(x) = -abs(nums.at(x));
            }
        }
        for(int i=0; i<n; ++i) {
            if (nums.at(i)>0){
                return i+1;
            }
        }
        return n;
    }
};
