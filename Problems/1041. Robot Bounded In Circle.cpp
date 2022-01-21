class Solution {
public:
    bool isRobotBounded(string instructions) {
        int dx = 0 , dy = 1; 
        int x = 0 , y = 0; 
        for (auto&i:instructions) {
            if (i == 'G') {
                x+=dx; 
                y+=dy; 
            } else if (i == 'L') {
                swap(dx,dy); 
                dx*=-1; 
            } else {
                swap(dx,dy); 
                dy*=-1; 
            }
        }
        if ((x==0 and y == 0) or (dx != 0 || dy != 1)) {
            return true; 
        }
        return false; 
    }
};
