class Solution {
    vector<vector<int>>ans;
    vector<int>temp;
    void generate(const int& n , vector<int>&candidates , int target , int i) {
        if (target == 0) {
            ans.push_back(temp); 
            return ;
        }
        if (n <= i || target < 0) {
            return; 
        }
        for (; i<n; ++i) {
            temp.push_back(candidates.at(i)); 
            generate(n , candidates , target-candidates.at(i) , i); 
            temp.pop_back();
        }

    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        const int &n = candidates.size(); 
        generate(n , candidates, target , 0); 
        return ans; 
    }
};
