int temp(void) {
    ios_base::sync_with_stdio(0); 
    cout.tie(nullptr); 
    cin.tie(nullptr); 
    return 0; 
}
static int x = temp(); 
class Solution {
public:
    long long kthSmallestProduct(vector<int>& nums1, vector<int>& nums2, long long k) {
        auto find_min_idx = [&] (long long product , long long num) {
            long long low = 0 , high = nums2.size()-1; 
            long long res = high + 1; 
            while (low <= high) {
                long long mid = low + (high-low)/2ll; 
                if (num * nums2[mid] <= product) {
                    res = mid; 
                    high = mid -1; 
                } else {
                    low = mid + 1; 
                }
            }
            return nums2.size() - res; 
        }; 
        auto find_max_idx = [&] (long long product , long long num) {
            long long low = 0 , high = nums2.size()-1; 
            long long res = -1; 
            while (low <= high) {
                long long mid = low + (high - low) /2ll; 
                if ( num * nums2[mid] <= product) {
                    res = mid ; 
                    low = mid + 1; 
                } else {
                    high =  mid -1; 
                }
            }
            return res + 1; 
        };
        auto count = [&] (long long product) {
            long long counter{}; 
            for (auto&itr: nums1) {
                if (itr == 0) {
                    if (product >=0) {
                        counter+= nums2.size(); 
                    }
                } else if (itr > 0) {
                    counter += find_max_idx(product , itr);
                } else {
                    counter += find_min_idx(product , itr); 
                }
            }
            return counter; 
        };
        long long low=-1e10 , high= 1e10+1; 
        long long res{};
        while (low <= high) {
            long long mid = low + (high - low) / 2ll; 
            if (count(mid) >= k) {
                res = mid; 
                high = mid -1;
            } else {
                low = mid + 1;
            }
        }
        return res;  
    }
};
