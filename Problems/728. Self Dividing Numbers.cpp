class Solution {
    bool selfDividing(int i) {
        int temp = i; 
        while(i) {
            if (i%10 == 0 || temp % (i%10) != 0) {
                return false; 
            }
            i/=10; 
        }
        return true; 
    }
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>res; 
        for (int i = left; i<=right; ++i) {
            if(selfDividing(i)) {
                res.push_back(i); 
            }
        }
        return res; 
    }
};
