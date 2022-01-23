class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>ans; 
        vector<int>in(n); 
        for (auto&itr:edges) {
            in[itr[1]]++; 
        }
        for (int i=0; i<n; ++i) {
            if (in[i] == 0) {
                ans.push_back(i); 
            }
        }
        return ans; 
    }
};
