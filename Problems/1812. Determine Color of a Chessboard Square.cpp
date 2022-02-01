class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int a = int(coordinates[0]-'a');
        int b = int(coordinates[1]-'0');
        return (a%2 + b%2)!=1; 
    }
};


