class Solution {
public:
    int minimumSwap(string s1, string s2) {
        int x{}, y{}; 
        int counter{}; 
        if (s1.size() != s2.size()) {
            return -1;
        }
        const int&n = s1.size(); 
        for (int i=0; i<n; ++i) {
            if (s1[i] == s2[i]) continue; 
            if (s1[i] == 'x' and s2[i] == 'y') {
                if (x==0) {
                    counter++; 
                    ++x; 
                } else {
                    --x; 
                }
            } else {
                if (y==0) {
                    counter++; 
                    ++y; 
                } else {
                    --y; 
                }
            }
        }
        if (x != y) {
            return -1; 
        }
        return counter; 
    }
};
