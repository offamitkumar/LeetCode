class NumArray {
    vector<int>segment_tree;
    int n; 
    void build(vector<int>&num , int current_index, int start_index , int final_index) {
        if (start_index == final_index) {
            segment_tree[current_index] = num[start_index]; 
            return ;
        }
        int mid = (final_index + start_index) /2; 
        build(num , current_index*2+1 , start_index ,mid); 
        build(num , current_index*2+2 , mid+1 , final_index); 
        segment_tree[current_index] = segment_tree[2*current_index+1]+segment_tree[2*current_index+2]; 
    }
    void update_node(int current_index , int start_index , int final_index , int node , int val) {
        if ( start_index == final_index) {
            segment_tree[current_index] = val; 
            return;
        }
        int mid = (start_index+final_index)/2; 
        if (node > mid ) {
            update_node(current_index*2+2 , mid+1, final_index , node, val);
        } else {
            update_node(current_index*2+1 , start_index, mid , node, val);
        }
        segment_tree[current_index] = segment_tree[2*current_index+1]+segment_tree[2*current_index+2]; 
    }
    int query(int current_index, int start_index, int final_index, int left , int right) {
        if (left > final_index || right < start_index) {
            return 0; 
        }
        if (left <= start_index && right>= final_index) {
            return segment_tree[current_index];
        }
        int mid = (start_index + final_index) /2; 
        int leftSum = query(current_index*2+1, start_index, mid, left , right); 
        int rightSum = query(current_index*2+2, mid+1, final_index, left , right); 
        return  leftSum + rightSum; 
    }
public:
    NumArray(vector<int>& nums) {
        this->n = nums.size();
        segment_tree.resize(4*nums.size());
        build(nums, 0, 0, nums.size()-1);
    }
    
    void update(int index, int val) {
        update_node(0,0,this->n-1, index , val);
    }
    
    int sumRange(int left, int right) {
        return query(0 , 0 , this->n-1 , left , right);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */
