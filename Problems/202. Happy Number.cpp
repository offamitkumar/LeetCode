class Solution {
    int f(int n){
        int num{};
        while(n){
            num+=((n%10)*(n%10));
            n/=10;
        }
        return num;
    }
    public:
    bool isHappy(int n) {
        set<int>s;
        while(n!=1 && s.find(n)==s.end()){
            s.insert(n);
            n = f(n);
            cout<<n<<endl;
        }
        return (n==1)?true:false;
    }
};
