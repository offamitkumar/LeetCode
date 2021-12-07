class KthLargest {
    priority_queue<int , vector<int> , greater<int>>q; 
    int k; 
public:
    KthLargest(int k, vector<int>& nums) {
        this -> k  = k; 
        for (auto&itr:nums) {
            if (q.size() < k) {
                q.push(itr); 
            } else if (q.top() < itr){
                q.pop(); 
                q.push(itr); 
            }
        }
    }
    
    int add(int val) {
        if (q.size() < k) {
            q.push(val); 
        } else if (q.top() < val){
            q.pop(); 
            q.push(val); 
        }
        return q.top(); 
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
