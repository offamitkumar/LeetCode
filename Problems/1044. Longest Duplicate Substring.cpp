int64_t mod = 1e9+7; 
class Solution {
    vector<long long>r_power; 
    bool okay(int siz, string &s, string &temp) {
        unordered_map<long long,vector<int>>prev_hash; 
        long long hsh = 0; 
        for (int i=0; i<siz; ++i) {
            hsh = (hsh * 26ll + (s[i]-'a'))%mod; 
        }
        prev_hash[hsh].push_back(0); 
        for (int i = siz; i<s.size(); ++i) {
            hsh = ((hsh - r_power[siz-1]*(s[i-siz]-'a'))%mod+mod)%mod;
            hsh = ((hsh*26ll)%mod + (s[i]-'a'))%mod;
            if (prev_hash.find(hsh) != prev_hash.end()) {
                for (auto&itr:prev_hash[hsh]) {
                    string ans = s.substr(itr, siz); 
                    string t = s.substr(i-siz+1, siz); 
                    if (t.compare(ans)==0) {
                        temp =ans; 
                        return true; 
                    }
                }
            }
            prev_hash[hsh].push_back(i-siz+1); 
        }
        return false; 
    }
public:
    string longestDupSubstring(string s) {
        long long low = 1 , high = s.size(); 
        const int &n = s.size(); 
        r_power.resize(n);
        r_power[0] = 1; 
        for (int i=1; i<n; ++i) {
            r_power[i] = (r_power[i-1]*26ll)%mod; 
        }
        string ans{}; 
        while (low <= high) {
            int mid = (low + high)/2; 
            string temp{};
            if (okay(mid,s,temp)) {
                if (temp.size()>ans.size()) 
                    ans = temp; 
                low = mid+1;
            } else {
                high = mid-1; 
            }
        }
        return ans; 
    }
};
