class Solution {
    string getMax(string s) {
        sort(s.begin(), s.end(), greater<char>()); 
        return s; 
    }
    string getMin(string s) {
        sort(s.begin(), s.end()); 
        string res{}; 
        int z{}; 
        for (int i=0; i<s.size(); ++i) {
            if (s[i] == '0') z++; 
            else{ res+=s[i]; }
            if (res.size() == 1) {
                res += string(z, '0'); 
            }
        }
        return res; 
    }
public:
    long long smallestNumber(long long num) {
        long long ans{}; 
        if (num == 0) {
            return 0ll; 
        }
        if (num < 0ll) {
            ans = stoll(getMax(to_string(abs(num)))); 
            ans*=(-1ll); 
        } else {
            ans = stoll(getMin(to_string(abs(num)))); 
        }
        return ans; 
    }
};
