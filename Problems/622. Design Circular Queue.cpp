class MyCircularQueue {
    deque<int>l; 
    int k; 
    public:
    MyCircularQueue(int k) {
        this->k = k; 
    }

    bool enQueue(int value) {
        if (this->isFull()) {
            return false; 
        }
        l.push_back(value);
        return true;
    }

    bool deQueue() {
        if (this->isEmpty()) {
            return false; 
        }
        l.pop_front(); 
        return true;
    }

    int Front() {
        if (this->isEmpty()) {
            return -1;
        }
        return l.front();
    }

    int Rear() {
        if (this->isEmpty()) {
            return -1;
        }
        return l.back();
    }

    bool isEmpty() {
        return l.size() == 0;
    }

    bool isFull() {
        return l.size() == k;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
