class Solution {
public:
    vector<string> printVertically(string s) {
        stringstream ss(s); 
        vector<string>st; 
        int max_i = 0; 
        while (ss >> s) {
            max_i = max(max_i , (int)s.size()); 
            st.push_back(s); 
        }
        vector<string>ans; 
        for (int i=0; i<max_i; ++i) {
            string r{}; 
            for (auto&itr:st) {
                if (itr.size() > i) {
                    r+=itr[i]; 
                } else{
                    r+=' '; 
                }
            }
            while (r.size() && r.back() == ' ') {
                r.pop_back(); 
            }
            ans.push_back(r); 
        }
        return ans; 
    }
};
