class Solution {
    stack<char>temp;
public:
    bool isValid(string s) {
        for(auto&itr:s){
            if(itr == '(' || itr == '[' || itr == '{') {
                temp.push(itr);
            } else{
                if(temp.size() == 0){
                    return false;
                }
                if( itr == ')' ){
                    if( temp.top() != '(' ) {
                        return false;
                    }else{
                        temp.pop();
                    }
                }else if( itr == ']' ){
                    if( temp.top() != '[' ) {
                        return false;
                    }else {
                        temp.pop();
                    }
                }else if( itr == '}' ) {
                    if( temp.top() != '{' ) {
                        return false;
                    }else {
                        temp.pop();
                    }
                }
            }
        }
        return temp.size() == 0;
    }
};
