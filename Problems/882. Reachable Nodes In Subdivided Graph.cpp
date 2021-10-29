class Solution {
    map<int,map<int,int>>graph; 
public:
    int reachableNodes(vector<vector<int>>& edges, int maxMoves, int n) {
        for (auto&itr:edges) {
            int u = itr[0]; 
            int v = itr[1];
            int w = itr[2]; 
            graph[u][v] = w; 
            graph[v][u] = w; 
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, less<pair<int,int>>>pq; 
        pq.push({maxMoves ,0}); 
        int counter{};
        unordered_set<int>visited;
        while (!pq.empty()) {
            int node = pq.top().second; 
            int remain = pq.top().first;
            pq.pop(); 
            if (visited.find(node) != visited.end()) {
                continue; 
            }
            visited.insert(node); 
            counter++; 
            for (auto&itr:graph[node]) {
                if (itr.second >= 0) {
                    if (visited.find(itr.first) == visited.end() && remain >= itr.second+1) {
                        pq.push({remain - itr.second-1, itr.first}); 
                    }
                    int cost = min(remain , itr.second); 
                    graph[itr.first][node]-=cost; 
                    graph[node][itr.first]-=cost; 
                    counter+=cost; 
                }
            }
        }
        return counter; 
    }
};
