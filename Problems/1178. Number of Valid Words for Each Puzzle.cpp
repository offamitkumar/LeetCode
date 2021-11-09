class Solution {
    int get(const string &s) {
        int ans{}; 
        for (const auto&itr:s) {
            ans|=(1<<int(itr-'a')); 
        }
        return ans; 
    }
public:
    vector<int> findNumOfValidWords(vector<string>& words, vector<string>& puzzles) {
        vector<int>ans(puzzles.size()); 
        map<int,int>wr;
        for (auto&itr:words) {
            wr[get(itr)]++; 
        }
        for (int j=0; j<puzzles.size(); ++j) {
            int x =get(puzzles[j]); 
            int first_bit = (1<<int(puzzles[j][0]-'a')); 
            int counter{}; 
            for (int i=x;i; i = (i-1)&x) {
                if (i&first_bit) 
                    counter += wr[i]; 
            }
            ans[j] = counter; 
        }
        return ans; 
    }
};
