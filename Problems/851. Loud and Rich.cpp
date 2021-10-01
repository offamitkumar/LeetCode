class Solution {
    vector<vector<int>>graph;
    vector<bool>visited;
    vector<int>quiet;
    vector<int>ans;
    int dfs(int node) {
        visited[node] = true;
        ans[node] = node; 
        for(auto&itr:graph[node]) {
            if (!visited[itr]) {
                int n = dfs(itr); 
                if (quiet[n] < quiet[ans[node]]) {
                    ans[node] = n; 
                }
            }
            if (quiet[ans[itr]] < quiet[ans[node]]){
                ans[node] = ans[itr]; 
            }
        }
        return ans[node];
    }
public:
    vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
        this ->quiet = quiet;
        graph.resize(quiet.size()+10); 
        ans.resize(quiet.size());
        visited.resize(quiet.size()+10, false);
        for (auto&itr:richer) {
            graph[itr[1]].push_back(itr[0]);
        }
        for (int i=0; i<quiet.size(); ++i) {
            if (!visited[i]) {
                ans[i] = dfs(i); 
            }
        }
        return ans;
    }
};
