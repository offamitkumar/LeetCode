class MyHashMap {
    vector<int>mp; 
public:
    MyHashMap() {
        ios_base::sync_with_stdio(false);
        mp.resize(1e6+100, -1); 
    }
    
    void put(int key, int value) {
        mp[key] = value; 
    }
    
    int get(int key) {
        return mp[key]; 
    }
    
    void remove(int key) {
        mp[key]=-1; 
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
