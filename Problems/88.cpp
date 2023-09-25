//
// Created by Amit Kumar on 24/09/2023
//
// https://leetcode.com/problems/merge-sorted-array
//

#include "vector"

using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (j >= 0) {
            if (i >= 0 and nums1.at(i) >= nums2.at(j)) {
                nums1.at(k) = nums1.at(i);
                i--;
            } else {
                nums1.at(k) = nums2.at(j);
                j--;
            }
            k--;
        }
    }
};