class CustomStack {
    deque<int>d; 
    stack<int>s; 
    int max_size , current_size;
public:
    CustomStack(int maxSize) {
        this->current_size = 0;
        this->max_size = maxSize;
    }
    
    void push(int x) {
        if (current_size != max_size) {
            d.push_front(x);
            current_size++;
        }
    }
    
    int pop() {
        if (current_size >= 1) {
            int x = d.front();
            d.pop_front();
            current_size--;
            return x;
        }
        return -1;
    }
    
    void increment(int k, int val) {
        while (k-- && (!d.empty())) {
            s.push(d.back()); 
            d.pop_back(); 
        }
        while (!s.empty()) {
            d.push_back(s.top()+val); 
            s.pop();
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
