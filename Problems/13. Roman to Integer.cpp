class Solution {
    public:
        int romanToInt(string s) {
            map<string, int> con = {
                {"IX" , 9}, 
                {"IV" , 4},
                {"XL" , 40}, 
                {"XC" , 90}, 
                {"CD" , 400},
                {"CM" , 900},
                {"I" ,1},
                {"V" ,5},
                {"X" ,10},
                {"L" ,50},
                {"C" ,100},
                {"D" ,500},
                {"M" ,1000}
            };
            int counter{}; 
            for (int i=0; i<s.size();i++) {
                int res{}; 
                auto itr = con.find(string(1,s[i])); 
                if (i+1 < s.size()) {
                    string rs = string(1,s[i]);
                    rs+=(s[i+1]);
                    if (con.find(rs) != con.end()) {
                        itr = con.find(rs); 
                        ++i;
                    }
                }
                counter += (itr->second); 
            }
            return counter; 
        }
};

