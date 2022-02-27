class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>mp; 
        for (auto&itr:s) {
            mp[itr]++; 
        }
        for (auto&itr:t) {
            mp[itr]--; 
        }
        int counter{}; 
        for (auto&itr:mp) {
            counter += abs(itr.second); 
        }
        return counter; 
    }
};
