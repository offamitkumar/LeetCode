auto compare = [](pair<int,int>&a, pair<int,int>&b){ return a.second > b.second; };
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans; 
        priority_queue<pair<int,int>, vector<pair<int,int>> , decltype(compare)>pq(compare); 
        map<int,int>f; 
        for (auto&itr:nums) {
            f[itr]++; 
        }
        for(auto&itr:f) {
            if (pq.size() < k) {
                pq.push({itr.first,itr.second}); 
            } else if (pq.top().second < itr.second) {
                pq.pop(); 
                pq.push({itr.first,itr.second}); 
            }
        }
        while (!pq.empty()) {
            ans.push_back(pq.top().first); 
            pq.pop(); 
        }
        return ans; 
    }
};


