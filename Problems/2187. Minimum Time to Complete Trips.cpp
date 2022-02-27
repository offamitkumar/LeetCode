class Solution {
    bool trips(int totalTrips, int64_t t, vector<int>&time) {
        int64_t counter{}; 
        for (auto&itr:time) {
            counter += (t / (int64_t)itr); 
            if (counter >=totalTrips) {
                return true; 
            }
        }
        return false; 
    }
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        int64_t low = 1 , high =1e18; 
        while (low < high) {
            int64_t mid = (low + high)/(int64_t)2; 
            if (trips(totalTrips, mid , time)) {
                high = mid; 
            } else {
                low = mid+1; 
            }
        }
        return high; 
    }
};
