class Solution {
    public:
        int largestRectangleArea(vector<int>& heights) {
            stack<int>s; 
            int i =0,area=0,ans=0; 
            while (i<heights.size()) {
                if (s.empty() || heights[s.top()]<=heights[i]) {
                    s.push(heights[i++]);
                } else {
                    int t = s.top(); s.pop(); 
                    if (s.empty()) {
                        area = heights[t] * i; 
                    } else {
                        area = heights[t] * (i - s.top() - 1);
                    }
                    ans = max(ans , area);
                }
            }
            while (!s.empty()) {
                int t = s.top(); s.pop(); 
                if (s.empty()) {
                    area = heights[t] * i; 
                } else {
                    area = heights[t] * (i - s.top() - 1);
                }
                ans = max(ans , area);
            }
            return ans;
        }
};
