class Solution {
public:
    int countGoodSubstrings(const string &s) {
        vector<int>v(26); 
        int counter{}, temp{}; 
        const int&n = s.size(); 
        for (int i=0; i<n; ++i) {
            if (i<3) {
                int idx = int(s[i]-'a'); 
                temp += (v[idx]==0); 
                v[idx]++; 
            } else {
                int idx = int(s[i-3]-'a');
                v[idx]--; 
                temp -=(v[idx]==0); 
                idx = int(s[i]-'a'); 
                temp+=(v[idx]==0); 
                v[idx]++; 
            }
            counter += (temp == 3); 
        }
        return counter; 
    }
};
