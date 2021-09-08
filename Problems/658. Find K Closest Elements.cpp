class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>ans; 
        priority_queue<pair<int,int>>pq;
        const int &n = arr.size();
        for (int i=0; i<n; ++i) {
            pq.push({abs(x - arr[i]),arr[i]});
            if (pq.size()>k)
                pq.pop();
        }
        while (!pq.empty()) {
            ans.push_back(pq.top().second); pq.pop();
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
