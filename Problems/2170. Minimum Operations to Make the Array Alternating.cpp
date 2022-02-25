class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        map<int,int>m1,m2; 
        const int&n = nums.size(); 
        for(int i=0; i<n; ++i) {
            if (i&1) {
                m1[nums[i]]++; 
            } else {
                m2[nums[i]]++; 
            }
        }
        pair<int,int> x1, x2, y1, y2; 
        for (auto&itr:m1) {
            if (x1.second < itr.second) {
                x2 = x1; 
                x1 = itr; 
            } else if (x2.second < itr.second) {
                x2 = itr; 
            }
        }
        for (auto&itr:m2) {
            if (y1.second < itr.second) {
                y2 = y1; 
                y1 = itr; 
            } else if (y2.second < itr.second) {
                y2 = itr; 
            }
        }
        if (x1.first == y1.first) {
            return n - max({x1.second + y2.second , y1.second + x2.second}); 
        } else {
            return n - (x1.second + y1.second); 
        }
    }
};
