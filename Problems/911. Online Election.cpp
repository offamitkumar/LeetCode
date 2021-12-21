class TopVotedCandidate {
    map<int,int>winner; 
    map<int,int>counter;
    vector<int>t; 
public:
    TopVotedCandidate(vector<int>& persons, vector<int>& times) {
        t = times; 
        const int&n = persons.size(); 
        int ans{}; 
        for (int i=0; i<n; ++i) {
            counter[persons[i]]++; 
            if (counter[persons[i]] >= counter[ans]) {
                ans = persons[i]; 
            }
            winner[times[i]] = ans; 
        }
    }
    
    int q(int ti) {
        if (winner.find(ti) != winner.end()) {
            return winner[ti]; 
        }
        auto itr = lower_bound(t.begin(), t.end(), ti); 
        return winner[t[itr-t.begin()-1]]; 
    }
};

/**
 * Your TopVotedCandidate object will be instantiated and called as such:
 * TopVotedCandidate* obj = new TopVotedCandidate(persons, times);
 * int param_1 = obj->q(t);
 */
