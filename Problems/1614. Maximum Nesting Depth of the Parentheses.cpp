class Solution {
public:
    int maxDepth(string s) {
        int counter{}, temp{}; 
        for (auto&itr:s) {
            if (itr == '(') {
                ++temp; 
                counter = max(counter, temp); 
            } else if (itr ==')') {
                --temp; 
            }
        }
        return counter; 
    }
};
