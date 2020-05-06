class Solution {
public:
    double myPow(double x, long long n) {
        double ans =1.0f;
        if(n>0){
            while(n){
                //double a =1;
                if(n&1){
                    ans*=x;   
                }
                x*=x;
                n>>=1;
            }
        }else{
            n = abs(n);
            while(n){
                if(n&1){
                    ans/=x;
                }
                x*=x;
                n>>=1;
                cout<<n<<endl;
            }
        }
        return ans;
       // return pow(x , double(n));
    }
};
