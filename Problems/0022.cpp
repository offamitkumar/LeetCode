class Solution {
    vector<string>ans;
    void check(int n , int index , int open , int close , string st){
        // if opening bracket can be insert
        if(2 * n == index){
            if(open == close){
                ans.push_back(st);
            }
            return ;
        }
        if(open < n){
            st.push_back('(');
            check(n , index+1 , open+1 , close, st);
            st.pop_back();
        }
        // if closing bracket can be insert
        if(close < open ){
            st.push_back(')');
            check(n , index+1 , open , close+1 , st);
            st.pop_back();
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        if(n==0){
            return ans;
        }else{
            check(n , 0 , 0 , 0 , "");
        }
        return ans;
    }
};
