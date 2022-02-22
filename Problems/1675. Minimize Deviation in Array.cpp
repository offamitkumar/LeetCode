class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        int deviation{INT_MAX}; 
        int mV{INT_MAX}; 
        priority_queue<int>pq; 
        for (auto&itr:nums) {
            if (itr&1) {
                itr*=2;
            }
            mV = min(mV, itr); 
            pq.push(itr);
        }
        while (!pq.empty() && pq.top()%2==0) {
            int x = pq.top(); pq.pop(); 
            deviation = min(deviation , x - mV); 
            mV = min(mV , x/2); 
            pq.push(x/2); 
        }
        if (!pq.empty()){
            deviation = min(deviation, pq.top() - mV); 
        }
        return deviation; 
    }
};
