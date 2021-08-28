class Solution {
    static bool comparator(pair<char,int>&a , pair<char,int>&b){
        return a.second > b.second;
    }
public:
    string frequencySort(string s) {
        vector<pair<char,int>>v(255);
        for_each(s.begin() , s.end() , [&](char c){
                v.at(c).first = c;
                v.at(c).second++;
                });
        sort(v.begin() , v.end(), comparator);
        string ans="";
        for(auto&itr:v){
            if(itr.second){
                ans+=string(itr.second, itr.first);
            }
        }
        return ans;
    }
};
