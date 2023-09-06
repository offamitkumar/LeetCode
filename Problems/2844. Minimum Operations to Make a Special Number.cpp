//
// Created by Amit Kumar on 06/09/23.
//

#include "string"
using namespace std;
class Solution {
public:
    int minimumOperations(string num) {
        reverse(num.begin(), num.end());
        bool zeroFound{false}, fiveFound{false};
        for (int i=0; i<num.size(); ++i) {
            if (num[i] == '5') {
                if (zeroFound) {
                    return i-1;
                }
                fiveFound = true;
            } else if (num[i] == '0') {
                if (zeroFound) return i-1;
                zeroFound = true;
            } else if (num[i] == '2' or num[i] == '7') {
                if (fiveFound) {
                    return i-1;
                }
            }
        }
        return num.size() - count(num.begin(), num.end(), '0');
    }
};