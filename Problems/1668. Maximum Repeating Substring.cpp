class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int counter{}; 
        const int&n = sequence.size(); 
        const int&m = word.size(); 
        string res{}; 
        for (int i=0; i<n; i+=m) {
            res += word; 
            if (sequence.find(res) == string::npos) {
                return counter; 
            }
            ++counter; 
        }
        return counter; 
    }
};
