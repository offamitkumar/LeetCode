//
// Created by Amit Kumar on 30/08/23.
//
#include "string"
using namespace std;

class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        if (str2.size() > str1.size()) {
            return false;
        }
        int i{}, j{};
        while (i < (int)str1.size() && j < str2.size()) {
            char nextChar = (int(str1[i] - 'a') + 1)%26 + 'a';
            if (str1[i] == str2[j] || nextChar == str2[j]) {
                j++;
            }
            i++;
        }
        return j == str2.size();
    }
};