class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans; 
        for (int i=0; i<(1<<nums.size()); ++i) {
            vector<int>t; 
            for (int j=0; j<nums.size(); ++j) {
                if (i&(1<<j)) {
                    t.push_back(nums.at(j)); 
                }
            }
            ans.push_back(t); 
        }
        return ans; 
    }
};

