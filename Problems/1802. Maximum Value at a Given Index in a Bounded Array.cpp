class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
        int64_t res = 0;
        int64_t high = maxSum; 
        int64_t low = 1;
        int64_t rightSpace = n - index - 1; 
        int64_t leftSpace = index;  
        while ( low<=high) {
            int64_t mid = (high-low)/2+low; 
            int64_t sum = mid; 
            int64_t x = mid - 1;
            int64_t leftSum; 
            int64_t rightSum; 
            if (x >= rightSpace) {
                rightSum = (x * (x+1ll))/2ll - ((x - rightSpace) * (x-rightSpace+1ll))/2ll; 
            } else {
                rightSum = (x * (x+1ll))/2ll + 1ll*(rightSpace- x); 
            }
            if (x >= leftSpace) {
                leftSum = (x * (x+1ll))/2ll - ((x - leftSpace) * (x-leftSpace+1ll))/2ll; 
            } else {
                leftSum = (x * (x+1ll))/2ll + 1ll*(leftSpace- x); 
            }
            sum += leftSum + rightSum; 
            if (sum <= maxSum) {
                res = mid; 
                low = mid+1; 
            } else {
                high = mid-1;
            }
        }
        return res;
    }
};
