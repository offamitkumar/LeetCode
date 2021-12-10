class Solution {
    unordered_map<int,int>freq; 
    bool possible(int num) {
        unordered_map<int,int>f; 
        while (num) {
            f[num%10]++; 
            num/=10; 
        }
        for (auto&itr:f) {
            if (freq[itr.first] < itr.second) {
                return false; 
            }
        }
        return true; 
    }
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        for (auto&itr:digits) {
            freq[itr]++; 
        }
        vector<int>ans; 
        for (int i=100; i<=999; i+=2) {
            if (possible(i)) {
                ans.push_back(i); 
            }
        }
        return ans; 
    }
};
