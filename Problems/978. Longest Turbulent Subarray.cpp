class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        const int &n = arr.size(); 
        int ans{1} , last, current{};
        for (int i=1; i<n; ++i) {
            if (arr[i-1] == arr[i]) {
                current = 0; 
                continue;
            }
            int c= arr[i-1] > arr[i]; 
            if (i!=1 && last == c) {
                current = 1; 
            } else {
                current++;
            }
            last = c;
            ans = max(ans , current+1);
        }
        return ans;
    }
};
