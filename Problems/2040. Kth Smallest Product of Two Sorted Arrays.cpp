int temp(void) {
    ios_base::sync_with_stdio(0); 
    cin.tie(nullptr); 
    cout.tie(nullptr); 
    return 0; 
}
static int x = temp();
class Solution {
public:
    long long kthSmallestProduct(vector<int>& nums1, vector<int>& nums2, long long k) {
        auto position = [&] (double val) {
            long long pos = 0; 
            for (auto&itr:nums1) {
                if ( itr < 0) pos += nums2.end() - lower_bound(nums2.begin(), nums2.end(), ceil(val/itr)); 
                else if (itr>0) pos += upper_bound(nums2.begin(), nums2.end(), floor(val/itr)) - nums2.begin(); 
                else
                    if (0<=val)
                        pos += nums2.size(); 
            }
            return pos;
        };
        int64_t low = -1e10 , high = 1e10; 
        while (low < high) {
            int64_t mid = low +(high-low)/2ll; 
            if (position(mid)<k) low = mid+1ll; 
            else high = mid; 
        }
        return low; 
    }
};
