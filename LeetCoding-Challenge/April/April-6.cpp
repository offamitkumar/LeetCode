class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string , vector<string>>mp;
        for(auto&itr:strs){
            string s = itr;
            sort(s.begin() , s.end());
            mp[s].push_back(itr);
        }
        vector<vector<string>>v(mp.size());
        int i = 0;
        for(auto&itr:mp){
            for(auto&k:itr.second){
                v[i].push_back(k);
            }
            i++;
        }
        return v;
    }
};
