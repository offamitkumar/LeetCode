class Solution {
    string multiply(const string& num1 ,const int &a) {
        string ans{}; 
        int carry{}; 
        for (int n = num1.size()-1; n>=0; --n) {
            carry += int(num1[n]-'0') * a; 
            ans.insert(0,1,char(carry%10+'0')); 
            carry/=10; 
        }
        if (carry) 
            ans = to_string(carry)+ans; 
        return ans; 
    }
    string add (const string&c , const string&n) {
        int carry{}; 
        string ans{}; 
        int cc=c.size()-1, nn =n.size()-1; 
        while (cc>=0 || nn>=0) {
            if (cc>=0 && nn>=0) {
                carry+= (int(c[cc]-'0') + int(n[nn]-'0')); 
            } else if (cc>=0) {
                carry+= int(c[cc]-'0'); 
            } else {
                carry+= int(n[nn]-'0'); 
            }
            ans.insert(0,1,char(carry%10+'0')); 
            carry/=10; 
            --cc,--nn; 
        }
        if (carry) 
            ans = to_string(carry)+ans; 
        return ans; 
    }
    public:
    string multiply(string num1, string num2) {
        string ans{}; 
        string carry{}; 
        for (int n = num2.size()-1; n>=0; --n) {
            carry = add(carry, multiply(num1,int (num2[n]-'0'))); 
            ans.push_back(carry[carry.size()-1]); 
            carry.pop_back(); 
        }
        reverse(carry.begin(), carry.end()); 
        ans+=carry; 
        reverse(ans.begin(), ans.end()); 
        if (all_of(ans.begin(),ans.end(),[](char ch) { return ch=='0';})) {
            return "0"; 
        }
        return ans; 
    }
};

