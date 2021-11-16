class Solution {
    vector<int>parent; 
    int find_parent(int node) {
        if (parent[node] == node) {
            return node; 
        }
        return parent[node] = find_parent(parent[node]); 
    }
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        const int &n = edges.size(); 
        parent.resize(n+10); 
        for (int i=1; i<n+10; ++i) {
            parent[i] = i; 
        }
        vector<int>ans; 
        for (auto&itr:edges) {
            int u= find_parent(itr[0]); 
            int v= find_parent(itr[1]); 
            if (u != v) 
                parent[u] = v; 
            else  {
                ans.push_back(itr[0]); 
                ans.push_back(itr[1]); 
            }
        }
        return ans; 
    }
};
