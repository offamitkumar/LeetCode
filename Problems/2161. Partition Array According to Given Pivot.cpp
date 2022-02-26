class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        const int&n = nums.size(); 
        vector<int>res(n); 
        int idx{}; 
        for (auto&itr:nums) {
            if (itr<pivot){ 
                res[idx++] = itr; 
            }
        }
        for (auto&itr:nums) {
            if (itr==pivot){ 
                res[idx++] = itr; 
            }
        }
        for (auto&itr:nums) {
            if (itr>pivot){ 
                res[idx++] = itr; 
            }
        }
        return res; 
    }
};
