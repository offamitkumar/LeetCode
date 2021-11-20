class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int counter{}; 
        for (int i=0; i<31; ++i) {
            int zero{}, one{}; 
            for (auto&itr:nums) {
                zero += ((itr & (1<<i)) == 0); 
                one += ((itr & (1<<i)) != 0); 
            }
            counter += (one * zero); 
        }
        return counter; 
    }
};
