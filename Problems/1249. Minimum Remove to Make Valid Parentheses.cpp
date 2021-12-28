class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string res{};
        int o{}, c{}; 
        stack<int>st; 
        for (auto&itr:s){
            if (itr == '(') {
                st.push(1); 
            } else if (itr == ')') {
                if (!st.empty()) {
                    st.pop(); 
                    o++; 
                    c++; 
                }
            }
        }
        o = min(o,c); 
        c = min(o,c); 
        for (auto&itr:s) {
            if (itr == '(') {
                if (o){
                    res+=itr; 
                    o--; 
                }
            } else if (itr == ')') {
                if (c>o) {
                    res+=itr;
                    c--; 
                }
            } else {
                res+=itr; 
            }
        }
        return res; 
    }
};
