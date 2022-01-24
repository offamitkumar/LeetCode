class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int counter{}; 
        while (target != 1) {
            if (target%2==0 && maxDoubles == 0) {
                counter+=(target-1); 
                break; 
            }
            if (target%2==0 && maxDoubles) {
                target/=2; 
                maxDoubles--; 
            } else {
                target--; 
            }
            counter++; 
        }
        return counter; 
    }
};
