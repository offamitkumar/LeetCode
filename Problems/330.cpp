class Solution {
    public:
        int minPatches(vector<int>& nums, int n) {
            int counter{}; 
            long long int currentNumber = 0ll;
            for(int i=0; i<nums.size() && currentNumber<n;) {
                if(nums[i] > currentNumber+1) {
                    currentNumber+= (currentNumber+1);
                    ++counter;
                } else {
                    currentNumber+=nums[i++]; 
                }
            }
            while (n>currentNumber) {
                currentNumber+=(currentNumber+1ll);
                counter++;
            }
            return counter;
        }
};
