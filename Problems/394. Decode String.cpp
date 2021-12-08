class Solution {
    int i; 
    int n; 
    string getRes(string&temp, int num) {
        string res{}; 
        for (int i=0; i<num; ++i) {
            res += temp; 
        }
        return res; 
    }
    string help(string s) {
        string res{}; 
        int num{}; 
        bool intSeen= false; 
        while (i<n) {
            if (s[i] == '[') {
                ++i; 
                string temp = help(s); 
                res += getRes(temp, num); 
                num=0; 
                intSeen = false; 
            } else if (s[i] == ']') {
                intSeen = false; 
                return res; 
            } else{
                if (s[i] >= '0' && s[i]<='9') {
                    intSeen = true; 
                }
                if (intSeen) {
                    num*=10; 
                    num+=(s[i]-'0'); 
                } else {
                    res += s[i]; 
                }
            }
            ++i; 
        }
        return res; 
    }
public:
    string decodeString(string s) {
        s = "1[" + s; 
        s = s + "]"; 
        i =0; 
        n = s.length(); 
        return help(s); 
    }
};
