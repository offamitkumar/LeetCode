class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if (n == 1) {
            return {0}; 
        }
        vector<unordered_set<int>>graph(n+1); 
        for (auto&itr: edges) {
            graph[itr[0]].insert(itr[1]); 
            graph[itr[1]].insert(itr[0]); 
        }
        queue<int>q; 
        for (int i=0; i<n; ++i) {
            if (graph[i].size() == 1) {
                q.push(i); 
            }
        }
        while (n>2) {
            int len = q.size(); 
            n-=q.size(); 
            for (int i=0; i<len; ++i) {
                int node = q.front(); 
                q.pop(); 
                for (auto&itr:graph[node]) {
                    graph[itr].erase(node); 
                    if (graph[itr].size() == 1) {
                        q.push(itr); 
                    }
                }
            }
        }
        vector<int>ans; 
        while (!q.empty()) {
            ans.push_back(q.front()); 
            q.pop(); 
        }
        return ans; 
    }
};
