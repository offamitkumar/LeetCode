class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        map<int,int>freq;
        int possible_ans = -1; 
        for (int i=0; i<tops.size(); ++i) {
            freq[tops[i]]++; 
            freq[bottoms[i]]++; 
            if (freq[tops[i]] >= tops.size()) {
                possible_ans = tops[i]; 
            }
        }
        if (possible_ans==-1) return possible_ans; 
        pair<int,int>moves; 
        for (int i=0; i<tops.size(); ++i) {
            if (tops[i] != possible_ans) moves.first++; 
            if (bottoms[i] != possible_ans) moves.second++; 
            if (tops[i] != possible_ans && bottoms[i] != possible_ans) return -1; 
        }
        return min(moves.first, moves.second); 
    }
};
