class LockingTree {
    vector<int>parent;
    vector<vector<int>>graph;
    map<int,int>locked;
    vector<int>l;
    int n; 
    void check_one(int root) {
        if (locked[root]!=-1) {
            l.push_back(root);
        }
        for (auto&itr:graph[root]) {
            check_one(itr);
        }
    }
    bool okay;
    void check_two(int root) {
        if(!okay)return;
        if(root==-1) {
            return;
        } else {
            if (locked[root]!=-1) {
                okay=false;
                return;
            }
            check_two(parent[root]);
        }
    }
public:
    LockingTree(vector<int>& parent) {
        this->parent = parent; 
        this-> n = parent.size();
        graph.resize(n+10); 
        locked[0] = -1;
        for (int i=1; i<n; ++i) {
            locked[i] = -1;
            graph[parent[i]].push_back(i);
        }
    }
     // -1 if unlocked otherwise user who locked it
    bool lock(int num, int user) {
        if (locked[num]!=-1) {
            return false;
        } else{
            locked[num] = user; 
            return true;
        }
    }
    
    bool unlock(int num, int user) {
        if (locked[num]==-1) {
            return false;
        } else {
            if (locked[num] == user) {
                locked[num] = -1;
                return true;
            } else {
                return false;
            }
        }
    }
    
    bool upgrade(int num, int user) {
        if (locked[num]!=-1) {
            return false; 
        } else {
            l.clear();
            okay = true;
            check_one(num);
            check_two(num);
            if(okay && l.size()) {
                for(auto&itr:l) {
                    locked[itr]=-1;
                }
                locked[num]=user; 
                return true;
            } else {
                return false;
            }
        }
        return true;
    }
};

/**
 * Your LockingTree object will be instantiated and called as such:
 * LockingTree* obj = new LockingTree(parent);
 * bool param_1 = obj->lock(num,user);
 * bool param_2 = obj->unlock(num,user);
 * bool param_3 = obj->upgrade(num,user);
 */
