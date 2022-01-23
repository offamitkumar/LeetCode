class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool>visited(rooms.size(), false); 
        queue<int>q; 
        visited[0] = true; 
        for (auto&itr:rooms[0]) {
            visited[itr] = true; 
            q.push(itr); 
        }
        while (!q.empty()) {
            int current_node = q.front(); q.pop(); 
            for (auto&itr:rooms[current_node]) {
                if (!visited[itr]) {
                    visited[itr] = true; 
                    q.push(itr); 
                }
            }
        }
        return all_of(visited.begin(), visited.end(), [](bool x) {return x;}); 
    }
};
