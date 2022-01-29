class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int,int>mp; 
        int counter{INT_MAX}; 
        for (auto&itr:deck) {
            mp[itr]++; 
        }
        for (auto&itr:mp)
            counter = min(counter , itr.second); 
        for (int i=2; i<=counter; ++i) {
            bool all=true; 
            for (auto&itr:mp) {
                if (itr.second % i != 0) {
                    all = false; 
                    break; 
                }
            }
            if (all) {
                return true; 
            }
        }
        return false; 
    }
};
