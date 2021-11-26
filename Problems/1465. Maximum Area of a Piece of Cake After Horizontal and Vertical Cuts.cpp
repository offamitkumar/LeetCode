class Solution {
    const int64_t mod = (1e9)+7; 
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(horizontalCuts.begin(), horizontalCuts.end()); 
        horizontalCuts.push_back(h); 
        sort(verticalCuts.begin(), verticalCuts.end()); 
        verticalCuts.push_back(w); 
        int64_t len{}, wid{}; 
        const int&n = horizontalCuts.size(); 
        const int&m = verticalCuts.size(); 
        for (int i=0; i<n; ++i) {
            if (i == 0) {
                len = horizontalCuts[i]; 
            } else {
                len = max((int)len , horizontalCuts[i] - horizontalCuts[i-1]); 
            }
        }
        for (int i=0; i<m; ++i) {
            if (i == 0) {
                wid = verticalCuts[i]; 
            } else {
                wid = max((int)wid , verticalCuts[i] - verticalCuts[i-1]); 
            }
        }
        return (len*wid)%mod;
    }
};
