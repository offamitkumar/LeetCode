class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans; 
        map<int,int>prev_seen; 
        for (int i=0; i<numbers.size(); ++i){
            if (prev_seen.find(target-numbers[i]) != prev_seen.end()) {
                ans.push_back(prev_seen[target-numbers[i]]); 
                ans.push_back(i+1); 
                break;
            }
            prev_seen[numbers[i]] = i+1; 
        }
        sort(ans.begin(), ans.end()); 
        return ans; 
    }
};
