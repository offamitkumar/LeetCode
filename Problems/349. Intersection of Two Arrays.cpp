class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size() + nums2.size();
        vector<int>ans(n); 
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        nums1.resize(distance(nums1.begin() , unique(nums1.begin(), nums1.end())));
        nums2.resize(distance(nums2.begin() , unique(nums2.begin(), nums2.end())));
        ans.resize(distance(ans.begin(), set_intersection(nums1.begin(), nums1.end(), nums2.begin(), nums2.end() , ans.begin())));
        return ans;
    }
};
