class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        size_t n = startTime.size();
        int counter{};
        for(size_t i=0; i<n;++i){
            counter+=(queryTime<=endTime[i] and queryTime>= startTime[i]);
        }
        return counter;
    }
};
