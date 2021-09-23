class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string>taken; 
        for (auto&itr:wordList) taken.insert(itr); 
        if (taken.find(endWord) == taken.end()) {
            return 0; 
        }
        int level=1; 
        queue<string>q; q.push(beginWord); 
        q.push("-1"); 
        while (q.size()>1) {
            string s = q.front(); q.pop(); 
            if (s=="-1") {
                level++;
                q.push(s); 
                continue;
            }
            for (int i=0; i<(int)s.size(); ++i) {
                for (int j=0; j<26; ++j) {
                    string temp = s; 
                    temp[i]=char(j+'a'); 
                    if (temp == s) {continue;}
                    else if(temp==endWord) {return level+1; }
                    else if(taken.find(temp) != taken.end()) {
                        q.push(temp); 
                        taken.erase(temp); 
                    }
                }
            }
        }
        return 0; 
    }
};
