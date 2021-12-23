class Solution {
   int bit(const string&s) {
       int num{}; 
       for (auto&itr:s) {
           int idx=int(itr-'a'); 
           num|=(1ll<<idx);
       }
       return num; 
   }
public:
    int maxProduct(vector<string>& words) {
        const int &len = words.size(); 
        int ans{};
        for (int i=0; i<len; ++i) {
            for (int j=i+1; j<len; ++j) {
                int n1 = bit(words[i]); 
                int n2 = bit(words[j]); 
                if ((n1&n2)==0){
                    ans = max(ans , int(words[i].size()*words[j].size())); 
                }
            }
        }
        return ans; 
    }
};
