class Solution {
    vector<vector<int>>res; 
    vector<int>temp; 
    void dfs(int node , int parent, vector<vector<int>>&graph) {
        if (node == graph.size()-1) {
            res.push_back(temp); 
        }
        for (auto &itr:graph[node]) {
            if (itr != parent) {
                temp.push_back(itr); 
                dfs(itr, node, graph); 
                temp.pop_back(); 
            }
        }
    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        temp.push_back(0); 
        dfs(0,-1, graph); 
        return res; 
    }
};
