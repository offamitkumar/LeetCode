bool compare(vector<int>&a, vector<int>&b) {
    if (a[0] == b[0]) {
        return a[1] > b[1]; 
    }
    return a[0] < b[0]; 
}
class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), compare); 
        int last{-1}; 
        int counter{1}; 
        for (auto&itr:intervals) {
            if (last == -1) {
                last = itr[1]; 
            } else if (last < itr[1]) {
                last = itr[1]; 
                counter++; 
            }
        }
        return counter; 
    }
};
