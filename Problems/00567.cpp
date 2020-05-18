class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int mapOne[26] = {0};
        for(auto&itr:s1)
            mapOne[itr-'a']++;
        int leftPointer = 0 , rightPointer = 0;
        const size_t m = s2.size();
        const int windowSize = s1.size();
        int patternLength = static_cast<int>(s1.size());
        while(rightPointer < m){
            if(mapOne[s2[rightPointer++]-'a']-->0)patternLength--;
            if(not patternLength)return true;
            if(rightPointer-leftPointer == windowSize and mapOne[s2[leftPointer++]-'a']++>=0)patternLength++;
        }
        return false;
    }
};
