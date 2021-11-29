class NumArray {
    vector<int>sum; 
public:
    NumArray(vector<int>& nums) {
        sum.resize(nums.size()+3); 
        const int &n = nums.size(); 
        for (int i=1; i<=n; ++i){
            sum[i] = nums[i-1] + sum[i-1]; 
        }
    }
    
    int sumRange(int left, int right) {
        return sum[right+1] - sum[left]; 
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
