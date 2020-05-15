class Solution {
public:
    int reverse(long long x) {
        bool le = (x<0);
        long long r{};
        x = abs(x);
        while(x){
            r*=10;
            r+=(x%10);
            x/=10;
        }
        r =  r*((le)?-1:1);
        if(r<-(long long)(1ll<<31ll) || r>(1ll<<31ll)-1ll){
            return 0;
        }else{
            return r;
        }
    }
};
