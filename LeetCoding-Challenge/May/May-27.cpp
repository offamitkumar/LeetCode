class Solution {
    vector<vector<int>>graph;
    vector<int>color;
    vector<bool>visited;
    bool bipartite(int current_node , int parent, int c ) {
        color.at(current_node)=1^c;
        visited.at(current_node) = true;
        for(auto&itr:graph[current_node]){
            if(itr == parent) {
                continue;
            }
            if(!visited[itr] && color[itr]==-1){
                if(!bipartite(itr , current_node , color.at(current_node))){
                    return false;
                }
            }
            if(parent !=-1 && color[itr] == color[current_node]){
                return false;
            }
        }
        return true;
    }
public:
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        if(dislikes.size()==0 || N==1){
            return true;
        }
        graph.resize(N+1);
        visited.assign(N+1,false);
        color.resize(N+1,-1);
        int start = dislikes[0][0];
        for(auto&itr:dislikes){
            graph[itr[0]].push_back(itr[1]);
            graph[itr[1]].push_back(itr[0]);
        }
        bool is_bipartite = true;
        for(int i=0; i<N; ++i){
            if(!visited.at(i))
            is_bipartite&=bipartite(i , -1 , 0);
            if(!is_bipartite){
                return false;
            }
        }
        return true;
    }
};
