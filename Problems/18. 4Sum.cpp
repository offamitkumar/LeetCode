class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end()); 
        vector<vector<int>>ans; 
        for (int i=0; i<nums.size()-1; ++i) {
            if (i && nums[i]==nums[i-1]) continue; 
            for (int j=i+1,x=0; j<nums.size()-2; ++j) {
                if (x && nums[j]==nums[j-1]) continue; 
                x++; 
                int k = j+1 , l = nums.size()-1; 
                while (k < l) {
                    int64_t tar = 1ll*nums[i] + 1ll*nums[j] + 1ll*nums[k] + 1ll*nums[l]; 
                    if (tar < target) {
                        k++; 
                    } else if (target < tar) {
                        l--; 
                    } else {
                        ans.push_back({nums[i], nums[j], nums[k], nums[l]}); 
                        k++; 
                        l--; 
                        while (k<l && nums[k]==nums[k-1]) {
                            k++; 
                        }
                        while (k<l && nums[l]==nums[l+1]) {
                            l--; 
                        }
                    }
                }
            }
        }
        return ans; 
    }
};

