//
// Created by Amit Kumar on 27/09/23

#include "vector"
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int frontPointer{};
        for (int i=0; i<(int)nums.size(); ++i) {
            if (nums.at(i) != val) {
                swap(nums.at(frontPointer), nums.at(i));
                frontPointer++;
            }
        }
        return frontPointer;
    }
};
