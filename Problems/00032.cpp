class Solution {
    stack<int>table;
    int result = 0;
public:
    int longestValidParentheses(string s) {
        for(int i=0;i<static_cast<int>(s.size());++i){
            if(s[i]=='('){
                table.push(i);
            }else{
                if(!table.empty() and s[table.top()]=='('){
                    table.pop();
                    if(table.empty()){
                        result = max(result , i+1);
                    }else{
                        result = max(result , i - table.top());
                    }
                }else{
                    table.push(i);
                }
            }
        }
        return result;
    }
};
