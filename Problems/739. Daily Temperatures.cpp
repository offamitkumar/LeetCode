class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>>s;
        const int &n = temperatures.size(); 
        vector<int>ans(n); 
        for (int i=n-1; i>=0; --i) {
            while (!s.empty() && s.top().first <= temperatures.at(i)) {
                s.pop(); 
            }
            if (s.size() == 0) {
                ans.at(i) = 0; 
            } else {
                ans.at(i) = (s.top().second - i); 
            }
            s.push({temperatures.at(i),i}); 
        }
        return ans; 
    }
};

