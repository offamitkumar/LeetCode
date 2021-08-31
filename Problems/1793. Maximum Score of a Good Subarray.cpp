class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int left = k, right = k; 
        int minVal = nums[k]; 
        int maxAns = (minVal * (right - left + 1)); 
        int n = nums.size();
        while (left-1 >=0 && right+1 <n) {
            if (nums[left-1] > nums[right+1]) {
                left-=1;
                minVal = min(minVal , nums[left]); 
            } else {
                right+=1;
                minVal = min(minVal , nums[right]); 
            }
            maxAns = max(maxAns , minVal * (right - left + 1)); 
        }
        while (left-1>=0) {
            left--;
            minVal = min(minVal , nums[left]);
            maxAns = max(maxAns , minVal * (right - left + 1)); 
        }
        while (right+1<n) {
            right++;
            minVal = min(minVal , nums[right]);
            maxAns = max(maxAns , minVal * (right - left + 1)); 
        }
        return maxAns;
    }
};
