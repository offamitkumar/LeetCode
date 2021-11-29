class Solution {
    set<string>temp; 
    map<string, set<string>>graph; 
    set<string>visited;
    void dfs(const string&s) {
        temp.insert(s); 
        visited.insert(s); 
        for (auto&itr:graph[s]) {
            if (visited.find(itr) == visited.end()) {
                dfs(itr); 
            }
        }
    }
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        vector<vector<string>>res; 
        const int &n = accounts.size(); 
        for (int i=0; i<n; ++i) {
            for (int j=1; j<accounts[i].size(); ++j) {
                for (int k=j; k<accounts[i].size(); ++k) {
                    graph[accounts[i][j]].insert(accounts[i][k]); 
                    graph[accounts[i][k]].insert(accounts[i][j]); 
                }
            }
        }
        // if any of email is taken then user is copied 
        for (int i=0; i<n; ++i) {
            temp.clear(); 
            bool found = false; 
            for (auto&itr:accounts[i]) {
                if (visited.find(itr) != visited.end()) {
                    found = true; 
                    break; 
                }
            }
            if (!found) {
                for (int j=1; j<accounts[i].size(); ++j) {
                    dfs(accounts[i][j]); 
                }
                vector<string>t; 
                t.push_back(accounts[i][0]); 
                for (auto&itr:temp) {
                    t.push_back(itr); 
                }
                res.push_back(t); 
            }
        }
        sort(res.begin(), res.end()); 
        return res; 
    }
};
