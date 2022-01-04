class Solution {
public:
    int calculate(string s) {
        int len = s.size(); 
        int current_number{}; 
        stack<int>st; 
        char operation = '+'; 
        for (int i=0; i<len; ++i) {
            char chr = s[i]; 
            if (s[i]>='0' && s[i] <='9') {
                current_number*=10; 
                current_number+=(chr-'0'); 
            } 
            if((chr != ' ' && !isdigit(chr))|| i == len-1) {
                if (operation == '+') {
                    st.push(current_number); 
                } else if (operation =='-') {
                    st.push(-current_number); 
                } else if (operation == '*') {
                    int num= st.top(); st.pop(); 
                    st.push(num*current_number); 
                } else if (operation == '/') {
                    int num = st.top(); st.pop(); 
                    st.push(num/current_number); 
                }
                operation = s[i]; 
                current_number = 0; 
            }
        }
        int res{}; 
        while (!st.empty()) {
            res+=(st.top()); 
            st.pop(); 
        }
        return res; 
    }
};
