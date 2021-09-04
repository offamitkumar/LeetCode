class Solution {
    vector<vector<int>> graph;
    vector<int>score_of,size_of; 
    vector<int>dist;
    vector<bool>visited;
    void dfs1(int parent) {
        visited[parent] =true;
        size_of[parent]=1;
        for (auto&child:graph[parent]) {
            if (!visited[child]) {
                dfs1(child);
                size_of[parent]+= size_of[child]; 
                score_of[parent]+= (score_of[child] + size_of[child]); 
            }
        }
    }
    void dfs2(int parent) {
        visited[parent] = true; 
        dist[parent] = score_of[parent]; 
        for (auto&child: graph[parent]) {
            if (!visited[child]) {
                score_of[parent] -= score_of[child]; 
                score_of[parent] -= size_of[child]; 
                size_of[parent] -= size_of[child];
                size_of[child] += size_of[parent]; 
                score_of[child] += score_of[parent]; 
                score_of[child] += size_of[parent];
                dfs2(child); 
                score_of[child] -= size_of[parent]; 
                score_of[child] -= score_of[parent]; 
                size_of[child] -= size_of[parent]; 
                size_of[parent] += size_of[child]; 
                score_of[parent] += score_of[child]; 
                score_of[parent] += size_of[child];
            }
        }
    }
public:
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        graph.resize(n); 
        score_of.resize(n); 
        dist.resize(n);
        visited.resize(n);
        fill(visited.begin(), visited.end(), false);
        size_of.resize(n);
        for (auto&itr:edges) {
            graph[itr[0]].push_back(itr[1]);
            graph[itr[1]].push_back(itr[0]);
        }
        dfs1(0);
        fill(visited.begin() , visited.end() , false); 
        dfs2(0);
        return dist;
    }
};
