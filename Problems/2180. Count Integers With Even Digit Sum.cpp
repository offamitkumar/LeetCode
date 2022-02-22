class Solution {
    bool evenSum(int n){ 
        int sum{}; 
        while (n){
            sum+=(n%10); 
            n/=10; 
        }
        return sum%2==0; 
    }
public:
    int countEven(int num) {
        int counter{}; 
        for (int i=1; i<=num; ++i) {
            counter+=evenSum(i); 
        }
        return counter; 
    }
};
