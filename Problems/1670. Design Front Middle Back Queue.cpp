class FrontMiddleBackQueue {
    list<int>l;
public:
    FrontMiddleBackQueue() {
    }
    
    void pushFront(int val) {
        l.push_front(val);
    }
    
    void pushMiddle(int val) {
        int mid = floor(double(l.size())/2.0); 
        auto itr= l.begin();
        advance(itr, mid);
        l.insert(itr, val);
    }
    
    void pushBack(int val) {
        l.push_back(val);
    }
    
    int popFront() {
        if (l.empty()) {
            return -1; 
        }
        int k = l.front(); 
        l.pop_front(); 
        return k; 
    }
    
    int popMiddle() {
        if (l.empty()) {
            return -1; 
        }
        int mid = floor(double(l.size())/2.0); 
        if (!(l.size() & 1)) {
            mid-=1;
        }
        auto itr = l.begin();
        advance(itr, mid);
        int k = *itr; 
        l.erase(itr); 
        return k; 
    }
    
    int popBack() {
        if (l.empty()) {
            return -1; 
        }
        int k = l.back(); 
        l.pop_back(); 
        return k; 
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */
