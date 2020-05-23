class Solution {
    vector<vector<int>>graph;
    vector<int>in_time , out_time;
    int timer;
    vector<vector<int>>bridge;
    vector<bool>visited;
    void dfs(int current_node , int parent){
        visited.at(current_node) = true;
        in_time[current_node] = out_time[current_node] = timer++;
        for(auto&itr:graph[current_node]){
            if(itr==parent){
                continue;
            }
            if(!visited[itr]){
                dfs(itr , current_node);
                if(out_time[itr] > in_time[current_node]){
                    bridge.push_back({itr , current_node});
                }
            }
            out_time[current_node] = min(out_time[current_node] , out_time[itr]);
        }
    }
public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        timer = 0;
        graph.resize(n);
        in_time.assign(n,0);
        visited.assign(n,false);
        out_time.assign(n,0);
        for(auto&itr:connections){
            graph.at(itr[0]).push_back(itr[1]);
            graph.at(itr[1]).push_back(itr[0]);
        }
        dfs(0,-1);
        return bridge;
    }
};
