class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        map<int,int>mp; 
        for (auto&itr:arr) {
            int x = (itr%k+k)%k;
            mp[x]++; 
        }
        for (int i=0; i<k; ++i) {
            if (i == 0 || i == (k-i)) {
                if (mp[i]%2!=0){
                    return false; 
                }
            } else if (mp[i] != mp[k-i]) {
                return false; 
            }
        }
        return true; 
    }
};
