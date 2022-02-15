class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int counter{}; 
        unordered_map<int,int>m; 
        for (auto&itr:nums) {
            m[itr]++; 
        }
        for (auto&itr:m) {
            if (k == 0 ) {
                if (itr.second>1) 
                    counter++; 
            } else if (m.find(itr.first+k) != m.end()) {
                counter++; 
            }
        }
        return counter; 
    }
};
