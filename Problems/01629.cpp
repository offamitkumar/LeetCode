class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int duration = releaseTimes.at(0), index = 0; 
        for(int i=1; i<(int)releaseTimes.size(); ++i) {
            int x = releaseTimes.at(i) -releaseTimes.at(i-1) ;
            if ( x> duration) {
                duration = x;
                index = i;
            } else if (x == duration and keysPressed.at(index) < keysPressed.at(i)) {
                index = i;
            }
        }
        return keysPressed.at(index);
    }
};
