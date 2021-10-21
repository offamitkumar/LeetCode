class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        #define int int64_t
        const int &m = primes.size(); 
        vector<int>ans(n+1); 
        auto compare = [&] (pair<int,int>&a, pair<int,int>&b) {
            return (ans[a.first] * a.second) > (ans[b.first] * b.second);
        };
        ans[0] = 1;
        ans[1] = 1; 
        int index = 2; 
        priority_queue<pair<int,int>, vector<pair<int,int>> ,decltype(compare) >pq(compare);
        for (auto&itr:primes) {
            pq.push(make_pair(1, itr)); 
        }
        while (index <= n) {
            auto current = pq.top(); pq.pop();
            if (ans[index-1] == ans[current.first] * current.second) { 
                pq.push(make_pair(current.first+1,current.second)); 
                continue; 
            }
            ans[index++] = ans[current.first] * current.second; 
            pq.push(make_pair(current.first+1, current.second)); 
        }
        #undef int
        return ans[n];
    }
};


