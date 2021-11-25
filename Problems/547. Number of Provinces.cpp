class Solution {
    vector<int>parent; 
    vector<bool>visited;
    int find_parent(int node) {
        if (parent[node] == node) {
            return node; 
        }
        return parent[node] = find_parent(parent[node]); 
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int ans{}; 
        const int &n = isConnected.size(); 
        const int &m = isConnected[0].size(); 
        parent.resize(n+10); 
        visited.resize(n+10, false); 
        for (int i=0; i<n+10; ++i) {
            parent[i] = i; 
        }
        for (int i=0; i<n; ++i) {
            for (int j=0; j<m; ++j) {
                if (isConnected[i][j]) {
                    int u = find_parent(i); 
                    int v = find_parent(j); 
                    if (u != v) {
                        parent[u] = v; 
                    }
                }
            }
        }
        for (int i=0; i<n; ++i) {
            int u = find_parent(i); 
            if (!visited[u]) {
                ans++; 
                visited[u] = true; 
            }
        }
        return ans; 
    }
};
