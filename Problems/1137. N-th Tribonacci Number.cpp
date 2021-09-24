class Solution {
public:
    int tribonacci(int n) {
        if (n==0) { 
            return 0; 
        }else if (n==1) {
            return 1; 
        }else if (n==2) {
            return 2; 
        }else {
            vector<int64_t>v={0,1,1}; 
            for (int i=3; i<=n; ++i) {
                int sum = accumulate(v.begin(), v.end(),0ll); 
                v[0] = v[1]; 
                v[1] = v[2]; 
                v[2] = sum; 

            }
            return v[2]; 
        }
    }
};
