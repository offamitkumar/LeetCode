class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string , vector<string>>mp;
        for(auto&itr:strs){
            string s = itr;
            sort(s.begin() , s.end());
            mp[s].push_back(itr);
        }
        vector<vector<string>>v;
        int i = 0;
        for(auto itr:mp){
            v.push_back(itr.second);
            i++;
        }
        return v;
    }
};
