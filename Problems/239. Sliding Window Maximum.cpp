class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans; 
        deque<int>d; 
        const int &n = nums.size(); 
        for (int i=0; i<n; ++i) {
            while (!d.empty() && i-d.front()>=k) d.pop_front(); 
            while (!d.empty() && nums[d.back()] <= nums[i]) d.pop_back(); 
            d.push_back(i); 
            if (i>=k-1) 
                ans.push_back(nums[d.front()]); 
        }
        return ans; 
    }
};

