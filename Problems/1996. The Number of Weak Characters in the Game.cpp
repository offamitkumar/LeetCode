class Solution {
    static bool compare(vector<int>&a, vector<int>&b) {
        if (a[0] == b[0] ) {
            return a[1] > b[1];
        } else { 
            return a[0] < b[0];
        }
    }
public:
    int numberOfWeakCharacters(vector<vector<int>>& pr) {
        sort(pr.begin(), pr.end(), compare);
        int max_def = 0; 
        int n = pr.size();
        int counter{};
        for (int i = n-1; i>=0; --i) {
            if (pr[i][1] < max_def) {
                counter++;
            }
            max_def = max(max_def , pr[i][1]);
        }
        return counter; 
    }
};
