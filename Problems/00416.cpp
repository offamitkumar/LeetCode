
class Solution {
    unordered_map<int,bool>dp;
    bool dfs(vector<int>&n , int index , int target){
        if(dp.find(target)!=dp.end()){
            return dp[target];
        }
        if(index>=n.size() or target<0)return false;
        dp[target] = false;
        for(auto i=index;i<(int)n.size(); ++i){
            if(dfs(n , i+1 , target - n[i])){
                dp[target] = true;
                return dp[target];
            }
        }
        return dp[target];
    }
public:
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin() , nums.end() , 0);
        if(sum%2 or nums.size() == 1){
            return false;
        }else if(nums.size()==0){
            return true;
        }
        sort(nums.begin() , nums.end());
        dp[0] = true;
        return dfs(nums , 0 , sum/2);
    }
};
