class Solution {
public:
    string intToRoman(int num) {
        vector<pair<string, int>> con = {
            {"I",1},
            {"IV",4},
            {"V",5},
            {"IX",9},
            {"X",10},
            {"XL", 40},
            {"L",50},
            {"XC", 90},
            {"C",100},
            {"CD",400},
            {"D",500},
            {"CM",900},
            {"M",1000}
        };
        string res{};
        for (auto itr = con.rbegin(); itr != con.rend(); ++itr) {
            while (num >= itr->second) {
                res += itr->first; 
                num -=itr->second; 
            }
        }
        return res; 
    }
};

