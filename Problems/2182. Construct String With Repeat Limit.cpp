class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        unordered_map<char,int>mp; 
        for (auto&itr:s) {
            mp[itr]++; 
        }
        priority_queue<pair<char,int>>pq; 
        for (auto&itr:mp) {
            pq.push(itr); 
        }
        string ans{}; 
        while (!pq.empty()) {
            auto temp = pq.top(); pq.pop(); 
            ans += string(min(temp.second , repeatLimit),temp.first); 
            if (temp.second > repeatLimit) {
                if (!pq.empty()){
                    auto temp1 = pq.top(); pq.pop(); 
                    ans+=temp1.first; 
                    temp1.second--; 
                    temp.second-=repeatLimit; 
                    pq.push(temp); 
                    if (temp1.second>0)
                        pq.push(temp1); 
                } else {
                    break;
                }
            }
        }
        return ans; 
    }
};
