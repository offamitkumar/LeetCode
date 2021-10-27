class RandomizedCollection {
    map<int, unordered_set<int>>mq; 
    int counter{}; 
    vector<int>v; 
public:
    RandomizedCollection() {
        
    }
    
    bool insert(int val) {
        int ret = false;
        if (mq[val].size() == 0)
            ret = true; 
        mq[val].insert(counter); 
        if (counter < v.size()) {
            v[counter] = val;
        } else {
            v.push_back(val);
        }
        counter++;
        return ret; 
    }
    
    bool remove(int val) {
        bool ret = false;
        if (mq[val].size()>=1) {
            ret = true;
        } else {
            return ret; 
        }
        int x1 = *mq[val].begin(); mq[val].erase(x1); 
        if (mq[v[counter-1]].size()>=1){
            mq[v[counter-1]].erase(counter-1);
            swap(v[x1], v[counter-1]); 
            mq[v[x1]].insert(x1); 
        }
        counter--;
        return ret; 
    }
    
    int getRandom() {
        return v[rand()%counter];
    }
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
