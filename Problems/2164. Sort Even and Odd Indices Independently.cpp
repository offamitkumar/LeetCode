class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        const int&n = nums.size(); 
        vector<int>odd,even; 
        for (int i=0; i<n; ++i) {
            if (i&1) {
                odd.push_back(nums[i]); 
            } else {
                even.push_back(nums[i]); 
            }
        }
        sort(odd.begin(), odd.end(), greater<int>()); 
        sort(even.begin(), even.end()); 
        int j=0; 
        for (int i=0; i<even.size(); ++i) {
            nums[j] = even[i]; 
            j+=2; 
        }
        j=1; 
        for (int i=0; i<odd.size(); ++i) {
            nums[j] = odd[i]; 
            j+=2; 
        }
        return nums; 
    }
};
