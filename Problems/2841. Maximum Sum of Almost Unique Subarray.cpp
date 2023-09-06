//
// Created by Amit Kumar on 05/09/23.
//
#include "vector"
#include "map"
#include "iostream"
using namespace std;


class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        int64_t ans{}, tempSum{};
        map<int,int>counter;
        for (int i =0; i<k; ++i) {
            counter[nums[i]]++;
            tempSum+= nums[i];
        }
        if (counter.size() >= m) {
            ans = max(tempSum, ans);
        }
        int i = 0, j = k;
        while (j < (int)nums.size()) {
//            cout << "size = " << counter.size() << endl;
//            for (auto &itr: counter) {
//                cout << itr.first << ' ' << itr.second << endl;
//            }
//            cout << endl << endl;
            counter[nums[i]]--;
            if (counter[nums[i]] == 0) {
                counter.erase(nums[i]);
            }
            tempSum-=nums[i];
            counter[nums[j]]++;
            tempSum+=nums[j];
            if (counter.size() >= m) {
                ans = max(tempSum, ans);
            }
            i++;
            j++;
        }
        return ans;
    }
};