class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>>q; 
        for (auto&itr:nums) {
            if (q.size() < k) {
                q.push(itr); 
            } else if (q.top() < itr) {
                q.pop(); 
                q.push(itr);
            }
        }
        return q.top(); 
    }
};

