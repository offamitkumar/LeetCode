class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i=0, j = 0; 
        const int&n = version1.size(); 
        const int&m = version2.size(); 
        while (i<n || j<m) {
            int64_t x{} , y{}; 
            while (i<n && version1[i] != '.') {
                x*=10; 
                x+=(version1[i++]-'0'); 
            }
            ++i; 
            while (j<m && version2[j] != '.') {
                y*=10; 
                y+=(version2[j++]-'0'); 
            }
            ++j; 
            if (x > y ) {
                return 1; 
            } else if (y > x) {
                return -1; 
            }
        }
       return 0; 
    }
};
