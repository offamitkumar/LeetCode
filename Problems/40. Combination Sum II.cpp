class Solution {
    vector<vector<int>>ans;
    vector<int>temp;
    void generate(vector<int>&candidates , int index, int target) {
        if (target== 0) {
            ans.push_back(temp); 
            return ;
        }
        if (target < 0 || index >= candidates.size()) {
            return ;
        }
        for(; index < candidates.size();) {
            // if we take 
            temp.push_back(candidates.at(index)); 
            generate(candidates, index+1, target-candidates.at(index)); 
            temp.pop_back();
            // if we skip it
            int j = index;
            while (index < candidates.size() && candidates[j] == candidates[index]) {
                index++;
            }
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end()); 
        generate(candidates, 0, target); 
        return ans; 
    }
};

