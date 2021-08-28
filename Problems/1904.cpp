class Solution {
public:
    int numberOfRounds(string startTime, string finishTime) {
        int start = stoi(startTime.substr(0,2))*60 + stoi(startTime.substr(3,2));
        int finish = stoi(finishTime.substr(0,2))*60 + stoi(finishTime.substr(3,2));
        if (finish < start) {
            finish += (24*60);
        }
        if (start%15) 
            start+= (15 - (start%15)); 
        if (finish%15) 
            finish-=(finish%15);
        return (finish-start)/15; 
    }
};
