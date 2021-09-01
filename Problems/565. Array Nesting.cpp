class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        vector<int>ans(nums.size(),0); 
        vector<bool>visited(nums.size() , 0);
        for (int i=0; i<(int)nums.size(); ++i) {
            if(ans[i]==0) {
                stack<int>s;
                //s.push(i);
                int current = i; 
                while (ans[current] == 0 && visited[current]==0) {
                    visited[current]=1;
                    s.push(current);
                    current = nums[current]; 
                }
                while(!s.empty()) {
                    ans[s.top()] = s.size();
                    s.pop();
                }
            }
        }
        return *max_element(ans.begin(),ans.end()); 
    }
};
