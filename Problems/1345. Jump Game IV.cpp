class Solution {
public:
    int minJumps(vector<int>& arr) {
        const int&n = arr.size(); 
        if (n==1) return 0; 
        if (arr[0] == arr[n-1]){
            return 1;
        }
        unordered_map<int,vector<int>>nodes; 
        for (int i=0; i<n; ++i) {
            nodes[arr[i]].push_back(i); 
        }
        queue<int>q; q.push(0); 
        vector<int>visited(n,1e9);
        visited[0] = 0; 
        while(!q.empty()) {
            int current_node = q.front(); q.pop(); 
            if (current_node == n-1) return visited[current_node]; 
            int val = arr[current_node]; 
            vector<int>&l = nodes[val]; 
            l.push_back(current_node-1);
            l.push_back(current_node+1);
            for (auto&itr:l) {
                if (itr >=0 && itr<n && visited[itr] > visited[current_node]+1) {
                    visited[itr] = visited[current_node]+1; 
                    q.push(itr); 
                }
            }
            l.clear(); 
        }
        return -1; 
    }
};
