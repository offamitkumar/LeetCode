class Solution {
    long long mod = 1e9+7; 
public:
    int numWays(string s) {
        int counter{}; 
        for (auto&itr:s) {
            counter+= (itr=='1'); 
        }
        if (counter%3!=0) return 0; 
        const long long&len =s.size(); 
        if (counter == 0) {
            return (((len-1ll) * (len-2ll))/2ll)%mod; 
        }
        counter/=3; 
        long long f{0}, se{0}, temp{}; 
        for (int i=0; i<len; ++i) {
            if (temp == counter)f++;
            if (temp == 2*counter)se++; 
            temp+=(s[i]=='1'); 
        }
        f%=mod; 
        se%=mod;
        return (f*se*1ll)%mod; 
    }
};

