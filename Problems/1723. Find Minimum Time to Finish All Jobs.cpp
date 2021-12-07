class Solution {
    int res; 
    int n; 
    vector<int>w; 
    void dfs(int index , int currentTime, vector<int>&jobs, int k) {
        if ( res < currentTime) {
            return ; 
        }
        if (index == n) {
            res = min(res, currentTime); 
            return ;
        }
        set<int>s; 
        for (int i=0; i<k; ++i) {
            w[i]+=jobs[index]; 
            if (s.find(w[i]) == s.end())
                dfs(index+1, max(currentTime , w[i]), jobs, k); 
            s.insert(w[i]); 
            w[i]-=jobs[index]; 
        }
        return; 
    }
public:
    int minimumTimeRequired(vector<int>& jobs, int k) {
        res = INT_MAX; 
        n = jobs.size(); 
        w.resize(k); 
        dfs(0, 0 ,jobs, k); 
        return res; 
    }
};
