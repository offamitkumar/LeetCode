class Solution {
public:
    int maxSubarraySumCircular(vector<int>&A) {
        long long max_sum = A[0];
        int n=(int)A.size();
        long long min_sum = A[0];
        long long temp_max = A[0];
        long long temp_min = A[0];
        for(int i=1;i<n;++i){
            temp_max = max((long long)A[i] , temp_max+A[i]);
            max_sum = max((long long)max_sum , temp_max);
            temp_min = min((long long)A[i] , temp_min+A[i]);
            min_sum = min((long long)min_sum , temp_min);
        }
        long long total_sum = accumulate(A.begin() , A.end() , 0ll);
        if(total_sum == min_sum){
            return max_sum;
        }
        return max(max_sum, total_sum - min_sum);
    }
};
