class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        unordered_map<string , int >mp;
        for(int i=0;i<s.size()-minSize+1;++i){
            string str(s.begin()+i,s.begin()+i+minSize);
            mp[str]++;
        }
        int ans = 0;
        for(auto &[str,count]:mp){
            string st = str;
            sort(st.begin(),st.end());
            auto itr = unique(st.begin(),st.end());
            if(distance(st.begin(),itr)<=maxLetters){
                ans = max(ans , count);
            }
        }
        return ans;
    }
};
