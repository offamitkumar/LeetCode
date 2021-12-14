class Solution {
public:
    bool canCross(vector<int>& stones) {
        unordered_set<int>stone; 
        map<int , set<int>>mp; 
        for (auto&itr:stones) {
            stone.insert(itr); 
        }
        mp[stones[0]].insert(1); 
        const int&n = stones.size(); 
        for (int i=0; i<n; ++i) {
            int current_stone = stones[i]; 
            for (auto&move:mp[current_stone]) {
                int next_stone = current_stone + move; 
                if (stone.find(next_stone) != stone.end()) {
                    mp[next_stone].insert(move+1); 
                    mp[next_stone].insert(move); 
                    mp[next_stone].insert(move-1); 
                }
            }
        }
        return mp[stones[n-1]].size() != 0; 
    }
};
