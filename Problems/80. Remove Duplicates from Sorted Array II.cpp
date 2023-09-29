//
// Created by Amit Kumar on 29/09/23
//

#include "vector"

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
        int frontPointer{};
        for (int i = 0; i < (int) nums.size();) {
            nums.at(frontPointer++) = nums.at(i++);
            if (i < (int) nums.size() and nums.at(i) == nums.at(i - 1)) {
                nums.at(frontPointer++) = nums.at(i++);
            }
            while (i < (int) nums.size() and nums.at(i) == nums.at(i - 1)) {
                i++;
            }
        }
        return frontPointer;
    }
};