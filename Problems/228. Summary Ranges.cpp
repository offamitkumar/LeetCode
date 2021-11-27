class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>res; 
        const int &n = nums.size(); 
        for (int i=0; i<n;) {
            int j = i+1; 
            while (j<n && nums[j] == nums[j-1]+1) {
                ++j; 
            }
            string r = to_string(nums[i]); 
            if (nums[i] != nums[j-1]){
                r+="->"; 
                r+=to_string(nums[j-1]); 
            }
            res.push_back(r); 
            i = j; 
        }
        return res; 
    }
};
