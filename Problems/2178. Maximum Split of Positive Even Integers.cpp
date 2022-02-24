class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long>ans; 
        long long n = 2; 
        if (finalSum%n==0) {
            while (finalSum - n > n) {
                finalSum-=n; 
                ans.push_back(n); 
                n+=2; 
            }
            ans.push_back(finalSum); 
        }
        return ans; 
    }
};
