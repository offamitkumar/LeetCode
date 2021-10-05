class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        map<int, int> fre; 
        for (auto&itr:nums) {
            fre[itr]++;
        }
        int left{}, use{} , prev = -1; 
        for (auto&i:fre){
            if (i.second > 0) {
                int best = max(left , use); 
                use = i.first * i.second;
                use += (i.first-1 != prev) ? best : left; 
                left = best; 
                prev = i.first; 
            }
        }
        return max(use , left); 
    }
};
