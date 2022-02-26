class Solution {
public:
    int minimumSum(int num) {
        string s = to_string(num); 
        sort(s.begin(), s.end()); 
        int a = (s[0]-'0' ) * 10; 
        a+=(s[2]-'0'); 
        int b = (s[1]-'0' ) * 10; 
        b+=(s[3]-'0'); 
        return a+b; 
    }
};
