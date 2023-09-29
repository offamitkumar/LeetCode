//
// Created by Amit Kumar on 28/09/23
//

#include "vector"

using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int frontPointer{};
        for (int i=0; i<(int)nums.size(); ++frontPointer) {
            nums.at(frontPointer) = nums.at(i);
            while (i < (int)nums.size() and nums.at(i) == nums.at(frontPointer)) i++;
        }
        return frontPointer;
//        return distance(nums.begin(), unique(nums.begin(), nums.end()));
    }
};