class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        if(s.empty() or p.empty() or s.size() < p.size()){
            return ans;
        }
        int right = 0 , left = 0;
        size_t n = p.size();
        array<int , 26>frequency;
        fill(frequency.begin() , frequency.end() , 0);
        for(auto&itr:p){
            ++frequency[itr-'a'];
        }
        size_t m = s.size();
        const size_t windowSize = p.size();
        while(right < m){
            if(frequency[s[right++]-'a']-->=1)n--; // found a matching word
            if(0 == n){ // matched complete word
                ans.emplace_back(left);
            }
            if(right-left==windowSize && frequency[s[left++]-'a']++>=0){
                ++n;
            }
        }
        return ans;
    }
};
