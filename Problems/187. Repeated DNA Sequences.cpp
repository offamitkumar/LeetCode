class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string>res; 
        unordered_set<string>found; 
        set<string>st; 
        const int &len = s.size(); 
        for (int i=0; i<len-10; ++i) {
            string sub = s.substr(i,10); 
            if (st.find(sub)!=st.end()) {
                if (found.find(sub) == found.end()) {
                    res.push_back(sub); 
                    found.insert(sub); 
                }
            } else {
                st.insert(sub); 
            }
        }
        return res; 
    }
};
