class StockSpanner {
    stack<pair<int,int>>table;
public:
    StockSpanner() {
    }
    
    int next(int price) {
        int spanTime = 1;
        while(table.empty()==false and table.top().first<=price){
            spanTime+=table.top().second;
            table.pop();
        }
        table.push(make_pair(price , spanTime));
        return spanTime;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
