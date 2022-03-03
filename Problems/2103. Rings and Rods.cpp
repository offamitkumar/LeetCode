class Solution {
public:
    int countPoints(string rings) {
        map<char,set<char>>mp;
        set<char>s; 
        for (int i=0; i<rings.size(); i+=2){
            mp[rings[i+1]].insert(rings[i]); 
            if (mp[rings[i+1]].size() == 3) {
                s.insert(rings[i+1]); 
            }
        }
        return s.size(); 
    }
};
