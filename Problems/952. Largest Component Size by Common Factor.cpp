class Solution {
    vector<int>parent; 
    int find_parent(int n) {
        if (parent[n] == n) {
            return n; 
        }
        return parent[n] = find_parent(parent[n]); 
    }
public:
    int largestComponentSize(vector<int>& nums) {
        parent.resize(1e5+10); 
        for (int i=0; i<parent.size(); ++i) {
            parent[i] = i;
        }
        for (auto &itr: nums) {
            for (int i=2; i*i<=(itr); ++i) {
                if (itr%i==0) {
                    int u = find_parent(itr); 
                    int v = find_parent(i); 
                    if (u != v) parent[u] = v; 
                    if (itr/i != i) {
                        u = find_parent(itr); 
                        v = find_parent(itr/i); 
                        if (u != v) parent[u] = v; 
                    }
                }
            }
        }
        unordered_map<int,int>size_; 
        int ans{}; 
        for(auto&itr:nums) {
            const int &par = find_parent(itr); 
            size_[par]++; 
            ans = max(ans , size_[par]); 
        }
        return ans; 
    }
};
