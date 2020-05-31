class Solution {
    vector<vector<int>>graph;
    vector<vector<bool>>possible;
    vector<bool>visited;
    void bfs(int current_node){
        fill(visited.begin(),visited.end(),false);
        queue<int>q;
        q.push(current_node);
        while(!q.empty()){
            int cn = q.front();q.pop();
            for(auto&itr:graph[cn]){
                possible[current_node][itr] = true;
                if(!visited[itr]){
                    visited[itr]=true;
                    q.push(itr);
                }
            }
        }
    }
public:
    vector<bool> checkIfPrerequisite(int n, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        graph.resize(n+1);
        possible.assign(n+1, vector<bool>(n+1,false));
        visited.assign(n+1,false);
        for(auto&itr:prerequisites){
            graph.at(itr[0]).push_back(itr[1]);
        }
        for(int i=0;i<n;++i){
                bfs(i);
        }
        vector<bool>res;
        for(auto&itr:queries){
            res.push_back(possible[itr[0]][itr[1]]);
        }
        return res;
    }
};
