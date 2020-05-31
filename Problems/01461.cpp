class Solution {
public:
    bool hasAllCodes(string s, int k) {
        set<string>st;
        for(int i=0; i<(int)s.size()-k+1; ++i){
            st.insert(s.substr(i,k));
        }
        return ((1<<k) == st.size());
    }
};
