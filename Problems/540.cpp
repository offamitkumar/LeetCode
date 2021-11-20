class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int low = 0, high = arr.size()-1; 
        while (low < high) {
            int mid = (high + low) / 2; 
            if (mid&1) {
                if (arr[mid] == arr[mid-1]) {
                    low = mid + 1; 
                } else {
                    high = mid -1; 
                }
            }else {
                if (arr[mid] == arr[mid+1]) {
                    low = mid + 2; 
                } else {
                    high = mid; 
                }
            }
        }
        return arr[low]; 
    }
};
