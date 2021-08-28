class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low{} , high = arr.size(); 
        while (low < high) {
            int mid = (high - low) /2 + low; 
            if (arr[mid] - (mid+1) >= k) {
                high = mid;
            } else {
                low = mid+1;
            }
        }
        return low+k; 
    }
};
