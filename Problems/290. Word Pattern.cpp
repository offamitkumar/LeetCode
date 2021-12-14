class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s); 
        string temp;
        vector<string>st; 
        while (ss >>temp) {
            st.push_back(temp); 
        }
        map<char,string>mp; 
        map<string,char>rmp; 
        const int&n= pattern.size(); 
        if (n != st.size()) return false; 
        for (int i=0; i<n; ++i){
            temp = st[i]; 
            if (mp.find(pattern[i]) == mp.end() && rmp.find(temp) == rmp.end()){
                mp[pattern[i]] = temp; 
                rmp[temp]=pattern[i];
            } else {
                if (mp[pattern[i]] != temp || rmp[temp] != pattern[i]) {
                    return false; 
                }
            }
        }
        return true; 
    }
};
