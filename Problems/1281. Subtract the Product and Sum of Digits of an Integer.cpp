class Solution {
public:
    int mul(int n){
        int mul{1}; 
        while (n) {
            mul*=(n%10); 
            n/=10; 
        }
        return mul; 
    }
    int add(){
        int a{0}; 
        while (n) {
            a+=(n%10); 
            n/=10; 
        }
        return a; 
    }
    int subtractProductAndSum(int n) {
        return mul(n) - add(n); 
    }
};
