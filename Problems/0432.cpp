class AllOne {
    list<pair<int , unordered_set<string>>>lst;
    unordered_map<string , list<pair<int,unordered_set<string>>>::iterator>ump;
public:
    /** Initialize your data structure here. */
    AllOne() {
        lst.clear();
        ump.clear();
    }
    
    /** Inserts a new key <Key> with value 1. Or increments an existing key by 1. */
    void inc(string key) {
        if(ump.find(key)==ump.end()){ // key introduced first time
            ump[key] = lst.insert(lst.begin() , {0 , {key}});
        }
        auto current_iterator = ump[key];
        auto next_iterator = next(current_iterator);
        if(next_iterator == lst.end() or current_iterator->first +1 < next_iterator -> first){
            next_iterator = lst.insert( next_iterator , { current_iterator -> first + 1 , {} } );
        }
        next_iterator->second.insert(key);
        ump[key] = next_iterator; // now store the updated value
        current_iterator->second.erase(key);
        if(current_iterator->second.empty()){
            lst.erase(current_iterator);
        }
    }
    
    /** Decrements an existing key by 1. If Key's value is 1, remove it from the data structure. */
    void dec(string key) {
        if(ump.find(key) == ump.end()){
            return ;
        }
        auto current_iterator = ump[key];
        auto previous_iterator = prev(current_iterator);
        ump.erase(key);
        if(current_iterator->first > 1 ){
            if(current_iterator == lst.begin() or current_iterator->first-1 > previous_iterator->first) {
                previous_iterator = lst.insert(current_iterator, {current_iterator->first -1 , {}});
            }
            previous_iterator->second.insert(key);
            ump[key] = previous_iterator;
        }   
        current_iterator->second.erase(key);
        if(current_iterator->second.empty()){
            lst.erase(current_iterator); 
        }
    }
    
    /** Returns one of the keys with maximal value. */
    string getMaxKey() {
        if(ump.empty()){
            return "";
        }else{
            return *lst.rbegin()->second.begin();
        }
    }
    
    /** Returns one of the keys with Minimal value. */
    string getMinKey() {
        if(ump.empty()){
            return "";
        }else{
            return *lst.begin()->second.begin();
        }
    }
};

/**
 * Your AllOne object will be instantiated and called as such:
 * AllOne* obj = new AllOne();
 * obj->inc(key);
 * obj->dec(key);
 * string param_3 = obj->getMaxKey();
 * string param_4 = obj->getMinKey();
 */
