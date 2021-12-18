class Solution {
public:
    vector<int> memLeak(int memory1, int memory2) {
        vector<int>ans; 
        int tim{1}; 
        while (tim<=memory1 || tim <= memory2) {
            if (memory2 > memory1) {
                memory2-=tim;
            } else {
                memory1-=tim; 
            }
            tim++; 
        }
        ans.push_back(tim); 
        ans.push_back(memory1); 
        ans.push_back(memory2); 
        return ans; 
    }
};
