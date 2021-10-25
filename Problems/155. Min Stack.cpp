class MinStack {
    stack<int>s, t; 
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if (t.empty()) {
            s.push(val); 
            t.push(val);
        } else {
            t.push(val); 
            s.push(min(val , s.top())); 
        }
    }
    
    void pop() {
        s.pop(); 
        t.pop();
    }
    
    int top() {
        return t.top();
    }
    
    int getMin() {
        return s.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
