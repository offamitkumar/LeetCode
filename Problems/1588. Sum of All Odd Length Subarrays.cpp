class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int counter{}; 
        const int&n = arr.size(); 
        for (int i=0; i<n; ++i) {
            int sum{}; 
            for (int j=i; j<n; ++j) {
                sum+=arr[j]; 
                if ((j-i+1)%2==1){
                    counter+=sum; 
                }
            }
        }
        return counter; 
    }
};
