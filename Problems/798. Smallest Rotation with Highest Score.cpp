// If A[i] <= i, then to get 1 point for this element, K has to be in either [0,i-A[i]] or [i+1, N].
// If A[i] > i, then to get 1 point for this element, K has to be in [i+1, N-A[i]+i]
class Solution {
public:
    int bestRotation(vector<int>& nums) {
        int n = nums.size(); 
        vector<int>rotatation(n+1); 
        for (int i=0; i<n; ++i) {
            if (nums[i] > i) {
                rotatation[i+1] += 1; 
                rotatation[n - nums[i] + i + 1] -= 1;
            } else {
                rotatation[0] += 1; 
                rotatation[i-nums[i]+1] -= 1; 
                rotatation[i+1] += 1; 
                rotatation[n] -= 1; 
            }
        }
        int max_rotation = 0 , k_ = 0; 
        int current=0; 
        for (int i=0; i<n; ++i) {
            current += rotatation[i]; 
            if (max_rotation < current) {
                max_rotation = current; 
                k_ = i;
            }
        }
        return k_;
    }
};
