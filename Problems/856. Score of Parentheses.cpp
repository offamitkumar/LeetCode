class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>ss; 
        ss.push(-1); 
        s.push_back(')'); 
        const int&n = s.size(); 
        for (int i=0; i<n; ++i) {
            if (s[i] == '(') {
                ss.push(-1); 
            } else {
                int val=0; 
                while (ss.top()!=-1) {
                    val += ss.top(); 
                    ss.pop(); 
                }
                ss.pop(); 
                if (val == 0) {
                    ss.push(1); 
                } else {
                    ss.push(2*val); 
                }
            }
        }
        return ss.top()/2; 
    }
};
