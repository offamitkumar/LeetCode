class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end()); 
        const int&n = arr.size();
        int diff = arr[0] - arr[1]; 
        for (int i=2; i<n; ++i) {
            if (diff != arr[i-1] - arr[i]) {
                return false; 
            }
        }
        return true; 
    }
};
