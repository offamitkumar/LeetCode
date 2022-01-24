class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n = s.size(); 
        if (n%k != 0)
            s += string(k-n%k,fill); 
        n = s.size(); 
        vector<string>ans; 
        for (int i=0; i<n; i+=k) {
            ans.push_back(s.substr(i,k)); 
        }
        return ans; 
    }
};
