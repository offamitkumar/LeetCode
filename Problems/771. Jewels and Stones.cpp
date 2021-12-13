class Solution {
public:
    int numJewelsInStones(const string &jewels,const string &stones) {
        int counter{}; 
        const int &n = jewels.size(); 
        const int &m = stones.size(); 
        for (int i=0; i<n; ++i) {
            for (int j=0; j<m; ++j) {
                if (jewels[i] == stones[j]) {
                    counter++; 
                }
            }
        }
        return counter; 
    }
};
