class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end()); 
        const int &n = nums.size();
        int low = 0, high = nums[n-1]-nums[0];
        while (low < high) {
            int mid = (high-low)/2 +low; 
            int l = 0 , r = 1; 
            int counter{};
            while (r < n) {
                if (nums[r] -nums[l] > mid) {
                    l++;
                } else {
                    counter+= (r-l);
                    r++;
                }
            }
            if (counter<k) {
                low = mid+1;
            } else {
                high = mid;
            }
        }
        return low;
    }
};
