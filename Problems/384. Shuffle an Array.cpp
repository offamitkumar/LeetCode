class Solution {
    vector<int>m; 
public:
    Solution(vector<int>& nums) {
        m = nums; 
    }
    
    vector<int> reset() {
        return m; 
    }
    
    vector<int> shuffle() {
        vector<int>v = m; 
        random_shuffle(v.begin(), v.end()); 
        return v; 
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
