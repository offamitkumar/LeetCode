class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int>f(60); 
        int counter{}; 
        for (auto&itr:time) {
            int temp = itr%60; 
            int x = (60-temp)%60; 
            counter+=f[x]; 
            f[temp]++;
        }
        return counter; 
    }
};
