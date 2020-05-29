class Solution {
    vector<vector<int>>graph;
    bool isPossible = true;
    set<int> completed, running;
    void dfs( int current_node ) {
        if(!isPossible){
            return;
        }
        running.insert(current_node);
        for(auto & itr: graph[current_node]) {
            if ( running.find(itr) != running.end() ) {
                isPossible = false;
            }else if(completed.find(itr)==completed.end()){
                dfs(itr);
            }
        }
        running.erase(current_node);
        completed.insert(current_node);
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        graph.resize(numCourses+1);
        for(auto&itr:prerequisites){
            graph[itr[1]].push_back(itr[0]);
        }
        for (int i = 0; i < numCourses; ++i) {
            if(completed.find(i) == completed.end()) {
                dfs(i);
            }
        }
        return isPossible;
    }
};
