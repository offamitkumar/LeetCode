class ThroneInheritance {
    map<string , vector<string>>graph; 
    map<string, bool>is_alive; 
    string root;
    vector<string>res;
    void dfs(string parent) {
        if (is_alive[parent]) {
            res.push_back(parent);
        }
        for (auto&child:graph[parent]) {
            dfs(child);
        }
    }
public:
    ThroneInheritance(string kingName) {
        root = kingName; 
        is_alive[kingName] = true;
    }
    
    void birth(string parentName, string childName) {
        is_alive[childName] = true;
        graph[parentName].push_back(childName);
    }
    
    void death(string name) {
        is_alive[name] = false;
    }
    
    vector<string> getInheritanceOrder() {
        res.clear();
        dfs(root);
        return res;
    }
};

/**
 * Your ThroneInheritance object will be instantiated and called as such:
 * ThroneInheritance* obj = new ThroneInheritance(kingName);
 * obj->birth(parentName,childName);
 * obj->death(name);
 * vector<string> param_3 = obj->getInheritanceOrder();
 */
