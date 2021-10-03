class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int ans{}, maxseen = values.at(0); 
        const int &n = values.size();
        for (int i=1;i<n;++i) {
            ans = max(ans , maxseen + values.at(i) - i);
            maxseen = max(maxseen , values.at(i)+i);
        }
        return ans;
    }
};
