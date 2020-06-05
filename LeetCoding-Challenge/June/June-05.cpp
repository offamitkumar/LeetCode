class Solution {
    vector<int>a;
    int sum{};
public:
    Solution(vector<int>& w) {
        sum = 0;
        for(auto&itr:w){
            sum+=itr;
            a.push_back(sum);
        }
    }
    
    int pickIndex() {
        int value = rand() % sum;
        return binary_Search(value +1);
    }
    int binary_Search(int value){
        int low = 0;
        int high = a.size() -1;
        while(low < high){
            int mid = low + (high - low) / 2;
            if( a[mid] < value ){
                low = mid+1;
            }else{
                high = mid; 
            }
        }
        return low;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
