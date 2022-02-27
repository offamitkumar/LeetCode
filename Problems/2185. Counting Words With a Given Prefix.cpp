class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int counter{}; 
        int n = pref.size(); 
        for (auto&itr:words) {
            if (pref == itr.substr(0,n)) {
                counter++; 
            }
        }
        return counter; 
    }
};
