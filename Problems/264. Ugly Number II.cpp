class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int>ugly(n); 
        ugly[0] = 1; 
        int counter =1; 
        int p2 = 0 , p3 = 0, p5 = 0; 
        while (counter < n) {
            int n2 = ugly[p2] * 2; 
            int n3 = ugly[p3] * 3; 
            int n5 = ugly[p5] * 5; 
            int mn = min({n2,n3,n5});
            p2+= (mn == n2); 
            p3+= (mn == n3); 
            p5+= (mn == n5); 
            ugly[counter++] = mn; 
        }
        return ugly[n-1];
    }
};
