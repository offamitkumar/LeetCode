class Solution {
    vector<int>parent, indeg; 
    int find_parent(int node) {
        if (parent[node] == node) {
            return node; 
        }
        return parent[node] = find_parent(parent[node]); 
    }
public:
    vector<int> findRedundantDirectedConnection(vector<vector<int>>& edges) {
        vector<int>ans; 
        const int &n = edges.size(); 
        parent.resize(n+10); 
        indeg.resize(n+10); 
        for (int i=0; i<n+10; ++i) {
            indeg[i] = -1; 
            parent[i] = i; 
        }
        int possible1{-1}, possible2{-1}; 
        for (int i=0; i<n; ++i) {
            int u = edges[i][0]; 
            int v = edges[i][1]; 
            if (indeg[v] == -1) 
                indeg[v] = i; 
            else {
                possible2 = indeg[v]; 
                possible1 = i; 
                break; 
            }
        }
        for (int i=0; i<n; ++i) {
            if (i == possible1) {
                continue; 
            }
            int u = find_parent(edges[i][0]); 
            int v = find_parent(edges[i][1]); 
            if (v != u) {
                parent[u] = v; 
            } else {
                if (possible1 == -1) {
                    return edges[i]; 
                } else{
                    return edges[possible2]; 
                }
            }
        }
        return edges[possible1]; 
    }
};
