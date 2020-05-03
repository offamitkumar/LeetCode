class LRUCache {
    list<pair<int,int>>deQ; // take it as dequeue {key , value} 
    unordered_map<int , list<pair<int,int>>::iterator> keyValue;
    int Capacity;
public:

    LRUCache(int capacity):Capacity(capacity){}
    
    int get(int key) {
        if(keyValue.find(key)==keyValue.end()){
            return -1;
        }else{
            int value = keyValue[key]->second;
            deQ.erase(keyValue[key]);
            deQ.push_front(make_pair(key , value));
            keyValue[key] = deQ.begin();
            return value;
        }        
    }
    void put(int key, int value) {
        if(keyValue.find(key)!=keyValue.end()){
            // key is already present 
            deQ.erase(keyValue[key]);
        }else if(Capacity == deQ.size()){
            keyValue.erase(deQ.back().first);
            //cout<<deQ.back()<<endl;
            deQ.pop_back();
        }
        deQ.push_front(make_pair(key,value));
        keyValue[key] = deQ.begin();
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
