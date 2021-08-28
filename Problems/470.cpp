// The rand7() API is already defined for you.
// int rand7();
// @return a random integer in the range 1 to 7

class Solution {
public:
    int rand10() {
        int generatedNumber = -1;
        while(true){
            generatedNumber = (rand7()-1)*7+rand7();
            if(generatedNumber<=40){
                return generatedNumber%10+1;
            }
        }
    }
};
