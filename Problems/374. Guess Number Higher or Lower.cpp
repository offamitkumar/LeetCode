/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
    public:
        int guessNumber(int n) {
            #define int int64_t
            int h = n , l=1; 
            while (l <= h) {
                int mid = (h + l) / 2; 
                int temp = guess(mid);
                if (temp == -1) {
                    h = mid - 1; 
                } else if (temp == 1) {
                    l = mid + 1;
                } else{
                    return mid; 
                }
            }
            #undef int
            return -1;
        }
};

