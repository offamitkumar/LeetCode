class Solution {
    int check(string &s) {
        vector<int>arr(30); 
        for (auto&itr:s) {
            if (arr[itr-'a']>0) {
                return 0; 
            }
            arr[itr-'a']++;
        }
        return 1; 
    }
public:
    int maxLength(vector<string>& arr) {
        const int &n = arr.size(); 
        int ans{};
        for (int i=0; i<(1<<n); ++i) {
            string s; 
            for (int j=0; j<20; ++j) {
                if (i&(1<<j)) {
                    s+=arr[j]; 
                }
            }
            if (check(s)) {
                ans = max((int)s.size() , ans);
            }
        }
        return ans;
    }
};
