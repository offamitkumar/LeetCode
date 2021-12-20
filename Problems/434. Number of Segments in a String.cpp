class Solution {
public:
    int countSegments(string s) {
        stringstream ss(s); 
        int counter{}; 
        while (ss >> s) {
            counter++; 
        }
        return counter; 
    }
};
