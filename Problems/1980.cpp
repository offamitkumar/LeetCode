class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string res=""; 
        for(int i=0; i<nums.size(); ++i) {
            if (nums.at(i).at(i) == '0') {
                res+='1';
            } else {
                res+='0';
            }
        }
        return res;
    }
};
