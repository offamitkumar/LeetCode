class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        const int &n = nums2.size();
        unordered_map<int,int>next_greater;
        stack<int>s;
        s.push(-1);
        for (int i=n-1; i>=0; --i) {
            while ((s.top() != -1) && (s.top() <= nums2[i])) {
                s.pop();
            }
            next_greater[nums2[i]] = s.top(); 
            s.push(nums2[i]);
        }
        const int &m = nums1.size();
        vector<int>ans(m); 
        for (int i=0; i<m; ++i) {
            ans[i] = next_greater[nums1[i]];
        }
        return ans; 
    }
};
