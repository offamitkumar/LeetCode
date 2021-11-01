class Solution {
    vector<vector<int>>ans; 
    map<int,int>freq; 
    void dfs(int n, vector<int>&temp) {
        if (n == 0) {
            ans.push_back(temp);
            return ; 
        }
        for (auto&itr:freq) {
            if (itr.second) {
                itr.second--; 
                temp.push_back(itr.first); 
                dfs(n-1, temp); 
                temp.pop_back(); 
                itr.second++; 
            }
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size(); 
        vector<int>temp;
        for (auto&itr:nums) {
            freq[itr]++; 
        }
        dfs(n, temp); 
        return ans; 
    }
};
