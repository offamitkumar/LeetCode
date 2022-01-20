class Solution {
    int check(long h, vector<int>&piles){
        int counter{}; 
        for (auto&itr:piles) {
            if (itr <= h) {
                counter++; 
            } else {
                counter+=ceil((double)itr/(double)h); 
            }
        }
        return counter; 
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long low = 1 , high = 10e9; 
        while (low < high) {
            long mid = (low + high)/2ll; 
            if (check(mid, piles) <= h) {
                high =  mid; 
            } else {
                low = mid+1; 
            }
        }
        return high; 
    }
};
