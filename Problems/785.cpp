class Solution {
    vector<bool>visited;
    vector<int>v; // -1 -> no coloring is done
    bool iscolorable(vector<vector<int>>&graph , int currentNode){
        visited[currentNode] = true;
        for(auto&itr:graph[currentNode]){
            if(v[itr] == v[currentNode]){
                return false;
            }
            if(v[itr] == -1){
                v[itr] = v[currentNode]^1;
                if(iscolorable(graph , itr) == false){
                    return false;
                }
            }
        }
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        v.assign(graph.size() , -1);
        visited.assign(graph.size() , false);
       
        v[0] = 0; // colored with color 0
        bool ispossible = true;
            for(int i=0;i<(int)graph.size();++i){
                if(not(visited[i])){
                    v[i] = 0;
                    ispossible &= iscolorable(graph , i);
                }
            }    
        if(ispossible){
            return true;
        }else{
            return false;
        }
    }
};
