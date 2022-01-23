class Solution {
    vector<int>ans; 
    void dfs(int low, int high, int num = 0, int digit = 1) {
        if (num >= low and num<=high){
            ans.push_back(num); 
        }
        if (num > high || digit>=10) {
            return ; 
        }
        if (digit <= 9)
            dfs(low , high , num*10+digit, digit+1); 
    }
public:
    vector<int> sequentialDigits(int low, int high) {
        for (int i=1; i<9; ++i)
            dfs(low , high,i,i+1); 
        sort(ans.begin(), ans.end()); 
        return ans; 
    }
};
