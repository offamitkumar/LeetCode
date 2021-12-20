class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end()); 
        const int &n= arr.size(); 
        vector<vector<int>>ans; 
        int min_diff{INT_MAX}; 
        for (int i=1; i<n; ++i) {
            min_diff = min(min_diff, abs(arr[i] - arr[i-1])); 
        }
        for (int i=1; i<n; ++i) {
            if (abs(arr[i]-arr[i-1]) == min_diff) {
                ans.push_back({arr[i-1], arr[i]}); 
            }
        }
        return ans; 
    }
};
