//
// Created by Amit Kumar on 07/09/23.
//

#include "vector"

using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        vector<int> lis(nums.size(), 1);
        int maxLis{1};
        for (int i = 0; i<(int)nums.size(); ++i) {
            for (int j=0; j<i; ++j) {
                if (nums.at(i) >= nums.at(j)) {
                    lis.at(i) = max(lis.at(i), lis.at(j) + 1);
                    maxLis = max(maxLis, lis.at(i));
                }
            }
        }
        return nums.size() - maxLis;
    }
};