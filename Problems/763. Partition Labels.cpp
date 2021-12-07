class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>ans; 
        array<int, 26>lastIndex; 
        const int &n = s.size(); 
        for (int i=0; i<n; ++i) {
            lastIndex[s[i]-'a'] = i; 
        }
        int counter{}; 
        int current_max{}; 
        for (int i=0; i<n; ++i) {
            ++counter; 
            current_max = max(current_max , lastIndex[s[i]-'a']); 
            if (current_max == i) {
                ans.push_back(counter);
                counter = 0; 
            }
        }
        return ans; 
    }
};
