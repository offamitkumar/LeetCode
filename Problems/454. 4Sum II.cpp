class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int ans{}; 
        unordered_map<int,int>m1; 
        for (auto&i:nums1) {
            for(auto&j:nums2) {
                m1[i+j]++; 
            }
        }
        for (auto&i:nums3) {
            for(auto&j:nums4) {
                ans += m1[-(i+j)]; 
            }
        }
        return ans; 
    }
};

