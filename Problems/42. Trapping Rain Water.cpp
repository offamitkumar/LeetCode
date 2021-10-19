class Solution {
public:
    int trap(vector<int>& height) {
        const int &n = height.size(); 
        stack<int>left;
        left.push(height[0]);
        int ans{};
        for(int i=1; i<n; ++i){
            left.push(max(left.top(), height[i])); 
        }
        int mx{height[n-1]};
        left.pop();
        for (int i=n-2; i>=0; --i) {
            mx = max(mx, height[i]);
            ans += min(mx, left.top()) - height[i]; 
            left.pop();
        }
        return ans; 
    }
};
