class Solution {
public:
    int firstUniqChar(string s) {
        array<int,26>index;
        fill(index.begin() , index.end() , -1);
        for(auto i=0;i<(int)s.size();++i){
            if(index[s[i]-'a']==-1){
                index[s[i]-'a'] = i;
            }else {
                index[s[i]-'a'] = -2; // re-encounter of character
            }
        }
        int ans = INT_MAX;
        for(int i=0;i<26;++i){
            if(index[i]>=0){
                ans = min(ans , index[i]);
            }
        }
        return (ans==INT_MAX)?-1:ans;
    }
};
