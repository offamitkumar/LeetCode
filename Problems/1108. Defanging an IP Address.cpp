class Solution {
public:
    string defangIPaddr(string address) {
        for (int i=0; i<address.size(); ) {
            if (address[i] == '.')  {
                address.insert(i,"[");
                address.insert(i+2,"]");
                i=i+3; 
            }else {
                ++i;
            }
        }
        return address; 
    }
};

