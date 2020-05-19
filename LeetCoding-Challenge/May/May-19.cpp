class StockSpanner {
    stack<int>table;
    vector<int>arr;
    int indexCounter;
public:
    StockSpanner() {
        // do nothing
        indexCounter = 0;
        arr.clear();
    }
    
    int next(int price) {
        arr.push_back(price);
        while(table.empty() == false and arr[ table.top() ] <= price){
            table.pop();
        }
        int spanTime;
        if(table.empty()){
            table.push(indexCounter++);
            spanTime = indexCounter;
        }else{
            spanTime = indexCounter - table.top();
            table.push(indexCounter++);
        }
        return spanTime;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
