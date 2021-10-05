class MyCircularDeque {
    deque<int>d; 
    int k; 
public:
    /** Initialize your data structure here. Set the size of the deque to be k. */
    MyCircularDeque(int k) {
        this -> k = k; 
    }
    
    /** Adds an item at the front of Deque. Return true if the operation is successful. */
    bool insertFront(int value) {
        if (this->isFull()) {
            return false;
        }
        d.push_front(value);
        return true;
    }
    
    /** Adds an item at the rear of Deque. Return true if the operation is successful. */
    bool insertLast(int value) {
        if (this->isFull()) {
            return false;
        }
        d.push_back(value);
        return true;
    }
    
    /** Deletes an item from the front of Deque. Return true if the operation is successful. */
    bool deleteFront() {
        if (this->isEmpty()) {
            return false;
        }
        d.pop_front();
        return true;
    }
    
    /** Deletes an item from the rear of Deque. Return true if the operation is successful. */
    bool deleteLast() {
        if (this->isEmpty()) {
            return false;
        }
        d.pop_back();
        return true;
    }
    
    /** Get the front item from the deque. */
    int getFront() {
        if (this->isEmpty()) {
            return -1;
        }
        return d.front();
    }
    
    /** Get the last item from the deque. */
    int getRear() {
        if (this->isEmpty()) {
            return -1;
        }
        return d.back();
    }
    
    /** Checks whether the circular deque is empty or not. */
    bool isEmpty() {
        return d.size() == 0;
    }
    
    /** Checks whether the circular deque is full or not. */
    bool isFull() {
        return d.size() == k;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */
