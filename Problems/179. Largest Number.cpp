bool compare(int a, int b) {
    string x = to_string(a) + to_string(b); 
    string y = to_string(b) + to_string(a); 
    return x > y; 
}
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), compare); 
        string res{}; 
        for (auto&itr:nums) 
            res += to_string(itr); 
        if (all_of(res.begin(), res.end(), [](char ch) { return ch == '0'; })) {
            return "0"; 
        }
        return res; 
    }
};
