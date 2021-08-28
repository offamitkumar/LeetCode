class Solution {
public:
    int myAtoi(string str) {
        if(str.size() == 0){
            return 0;
        }
        int i=0;
        bool negative = false;
        long long ans = 0;
        if(!isdigit(str[i])){
            if(str[i] == ' ')
                while(i<str.size() && str[i] == ' '){
                    i++;
                }
        }
        if(str[i]=='+' or str[i]=='-'){
                negative =(str[i] == '-');
                ++i;
        }
        int n = (int)str.size();
        while(i<n){
            if(!isdigit(str[i])){
                break;
            }
            ans*=10;
            ans+=(str[i]-'0');
            ++i;
            if(negative and (-ans)<=INT_MIN){
                return INT_MIN;
            }else if(!negative and ans>INT_MAX){
                return INT_MAX;
            }
        }
        return (negative)?-1ll*ans:ans;
    }
};
