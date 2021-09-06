class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int>freq;
        for (auto&itr:arr) {
            freq[itr]++;
        }
        priority_queue<int,vector<int>, greater<int>>pq; 
        for (auto&itr:freq) {
            pq.push(itr.second);
        }
        while (k) {
            int a = pq.top(); pq.pop();
            if (k>=a) {
                k-=a;
            } else {
                pq.push(a);
                break;
            }
        }
        return pq.size();
    }
};

