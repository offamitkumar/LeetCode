class Solution {
    string getString(int n) {
        switch(n) {
            case 10:
                return "a"; 
            case 11:
                return "b"; 
            case 12:
                return "c"; 
            case 13:
                return "d"; 
            case 14:
                return "e"; 
            case 15:
                return "f"; 
            default:
                return to_string(n); 
        }
    }
public:
    string toHex(int num) {
        if (!num) return "0";
        string res{};
        if (num < 0) {
            u_int x= num; 
            while (x) {
                res += getString(x%16); 
                x/=16; 
            }
        } else {
            while (num) {
                res += getString(num%16); 
                num/=16; 
            }
        }
        reverse(res.begin(), res.end()); 
        return res; 
    }
};
