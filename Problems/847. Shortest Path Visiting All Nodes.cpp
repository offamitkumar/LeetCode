class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        if (graph.size() == 1) {
            return 0; 
        }
        const int &n = graph.size(); 
        vector<vector<bool>> visited(n , vector<bool>(1<<n)); 
        queue<pair<int,int>>q; 
        int counter{}; 
        for (int i=0; i<n; ++i) {
            q.push(make_pair(i,1<<i)); 
            visited[i][1<<i]=true; 
        }
        while (!q.empty()) {
            int N = q.size(); 
            counter++; 
            for (int i=0; i<N; ++i) {
                auto it = q.front(); q.pop(); 
                for (auto&itr:graph[it.first]) {
                    int nw = it.second | (1<<itr); 
                    if (nw == (1<<n)-1){
                        return counter; 
                    }
                    if (visited[itr][nw] == false) {
                        visited[itr][nw] = true; 
                        q.push(make_pair(itr,nw)); 
                    }
                }
            }
        }
        return counter; 
    }
};
