class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        const int&n = seats.size(); 
        vector<int>v(n+1); 
        int last_pe = 1e5; 
        for(int i=0; i<n; ++i) {
            if (seats.at(i) == 1) {
                last_pe = 0; 
            } else {
                last_pe++; 
            }
            v[i] = last_pe; 
        }
        last_pe = 1e5; 
        int ans{}; 
        for (int i=n-1; i>=0; --i) {
            if (seats.at(i) == 1) {
                last_pe = 0; 
            } else {
                last_pe++; 
            }
            v[i] = min(v[i], last_pe); 
            ans = max(ans , v[i]); 
        }
        return ans; 
    }
};
