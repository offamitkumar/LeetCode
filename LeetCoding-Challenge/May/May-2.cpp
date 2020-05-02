class Solution {
public:
    int numJewelsInStones(string J, string S) {
        set<char>jewels;
        for(auto&itr:J){
            jewels.insert(itr);
        }
        int counter{};
        for(auto&itr:S){
            if(jewels.find(itr)!=jewels.end()){
                ++counter;
            }
        }
        return counter;
    }
};
