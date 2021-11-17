class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        int t_friend = times[targetFriend][0]; 
        sort(times.begin(), times.end()); 
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>used; 
        priority_queue<int, vector<int>, greater<int>>freed; 
        for (auto &t : times) {
            while (!used.empty() and t[0] >= used.top().first) {
                freed.push(used.top().second); 
                used.pop(); 
            }
            if (t[0] == t_friend) break; 
            if (freed.empty()) {
                used.push({t[1], used.size()}); 
            } else {
                used.push({t[1], freed.top()}); 
                freed.pop();
            }
        }
        return freed.empty() ? used.size() : freed.top(); 
    }
};
