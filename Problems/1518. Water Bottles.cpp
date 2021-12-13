class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int drink{numBottles}, empty{numBottles}; 
        while (empty<0 || numExchange > empty) {
            int temp = empty/numExchange; 
            empty%=numExchange; 
            drink+=temp; 
            empty+=temp; 
        }
        return drink;
    }
};
