class Solution {
    bool check(char&a, char&b, string&c) {
        int x{}, y{}; 
        for (int i=0; i<c.size(); ++i) {
            if (c[i] == a) {
                x = i; 
            }
            if (c[i] == b) {
                y = i; 
            }
        }
        if (x < y) {
            return false; 
        }
        return true; 
    }
    bool canBeSwaped(string &a, string&b, string&c) {
        for (int i=0; i<min(a.size(), b.size()); ++i){
            if (a[i]== b[i] ) continue; 
            if(check(a[i], b[i], c)) {
                return true; 
            } else {
                return false; 
            }
        }
        if (a.size() > b.size()) {
            return true; 
        }
        return false; 
    }
public:
    bool isAlienSorted(vector<string>& words, string order) {
        const int &n = words.size(); 
        for (int i=0; i<n; ++i) {
            for (int j=i+1; j<n; ++j) {
                if (canBeSwaped(words[i], words[j], order)) {
                    return false; 
                }
            }
        }
        return true; 
    }
};
