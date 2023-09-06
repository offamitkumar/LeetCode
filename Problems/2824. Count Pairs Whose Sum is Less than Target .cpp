//
// Created by Amit Kumar on 30/08/23.
//
#include "vector"
using namespace std;
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int counter{};
        for (int i=0; i<static_cast<int>(nums.size()); ++i) {
            for (int j = i+1; j<static_cast<int>(nums.size()); ++j) {
                counter += (nums.at(i) + nums.at(j) < target);
            }
        }
        return counter;
    }
};