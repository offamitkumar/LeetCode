class Solution {
    vector<vector<int>>graph;
    set<int>visited, exploring; 
    stack<int>s; 
    bool possible; 
    void dfs(int node) {
        if (!possible) return; 
        exploring.insert(node); 
        for (auto&child:graph.at(node)) {
            if (exploring.find(child) != exploring.end()) {
                possible = false; 
                return ;
            }
            if (visited.find(child) == visited.end()) {
                dfs(child); 
            }
        }
        visited.insert(node); 
        exploring.erase(node); 
        s.push(node); 
    }
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        graph.resize(numCourses+1); 
        possible = true; 
        for(auto&edge:prerequisites){ 
            graph[edge[1]].push_back(edge[0]);
        }
        vector<int>res; 
        for (int node=0; node<numCourses; ++node) {
            if (visited.find(node) == visited.end()) {
                dfs(node); 
            }
            if (!possible) return res; 
        }
        while (!s.empty()) {
            res.push_back(s.top()); 
            s.pop(); 
        }
        return res; 
    }
};
