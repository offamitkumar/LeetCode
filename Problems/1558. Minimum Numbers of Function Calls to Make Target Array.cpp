class Solution {
public:
    int minOperations(vector<int>& nums) {
        int counter{};
        int highest{}; 
        for (auto&itr:nums){
            for (int i=31; i>=highest; --i) {
                if (itr&(1<<i)) {
                    highest=i; 
                    break; 
                }
            }
            int temp = itr; 
            while (temp) {
                counter++; 
                temp = temp&(temp-1); 
            }
        }
        return counter+highest; 
    }
};
