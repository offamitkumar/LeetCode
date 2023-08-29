//
// Created by Amit Kumar on 29/08/23.
//
#include "vector"
#include "algorithm"

using namespace std;

class Solution {

    static int find(vector<vector<int>> &offers, int value) {
        int left{}, right{static_cast<int>(offers.size()) - 1};
        int ans = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (offers[mid][0] > value) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }

    static int maxProfit(int index, vector<vector<int>> &offers, vector<int> &dp) {
        if (index >= offers.size()) {
            return 0;
        }

        if (dp[index] != -1) {
            return dp[index];
        }

        int nextGoodCandidate = find(offers, offers[index][1]);
        return dp[index] = max(
                offers[index][2] + maxProfit(nextGoodCandidate, offers, dp) /* accept the current candidate*/,
                maxProfit(index + 1, offers, dp) /* let's check the next one */
        );
    }

public:
    int maximizeTheProfit(int n, vector<vector<int>> &offers) {
        vector<int> dp(offers.size(), -1);
        sort(offers.begin(), offers.end());
        return maxProfit(0, offers, dp);
    }
};