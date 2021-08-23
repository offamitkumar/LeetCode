class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>ans(m+n); 
        int c = 0,l=0 , r=0; 
        while (l<m and r <n) {
            if (nums1[l] < nums2[r]) {
                ans[c++] = nums1[l++];
            } else {
                ans[c++] = nums2[r++];
            }
        }
        while (l<m) {
            ans[c++] = nums1[l++];
        }
        while (r<n) {
            ans[c++] = nums2[r++];
        }
        nums1 = ans; 
    }
};
