class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>arr(26); 
        for (auto&itr:s) {
            arr[itr-'a']++; 
        }
        for (auto&itr:t) {
            arr[itr-'a']--; 
        }
        int counter{}; 
        for (auto&itr:arr) {
            counter += abs(itr); 
        }
        return counter; 
    }
};
