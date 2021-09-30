class Solution {
    vector<bool>visited;
    int target;
    bool okay;
    void dfs(vector<int>&nums , int idx, int current_sum , int k) {
        if (okay || k==0)  {
            okay = true;
            return ;
        }
        if (current_sum == target) {
            dfs(nums ,0, 0, k-1);
        }
        for (int i=idx; i<nums.size(); ++i) { 
            if (visited[i] || current_sum + nums[i] > target) continue; 
            visited[i] = true;
            dfs(nums ,i+1,current_sum+nums[i], k); 
            visited[i] = false; 
        }
    }
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        okay = false; 
        target = accumulate(nums.begin(), nums.end(),0ll);
        if (target%k==0){
            visited.resize(nums.size(), false);
            target = (target/k);
            visited.resize(k); 
            dfs(nums,0,0,k); 
        }
        return okay;
    }
};
