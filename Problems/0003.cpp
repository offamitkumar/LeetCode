class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>st;
        int counter{} , temp{};
        int i =0 , j = 0;
        while(i<(int)s.size() && j<(int)s.size()){
            if(st.find(s[j])==st.end()){
                temp++;
                st.insert(s[j]);
                ++j;
            }else{
                while(st.find(s[j])!=st.end()){
                    st.erase(s[i]);
                    ++i;
                    temp--;
                }
            }
            counter = max(counter , temp);
        }
        return counter;
    }
};
