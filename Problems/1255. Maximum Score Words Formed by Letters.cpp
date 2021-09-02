class Solution {
    bool possible(string&s) {
        vector<int>v(30);
        for(auto&itr:s) {
            v[itr-'a']++;
            if (v[itr-'a'] > freq[itr-'a']) {
                return false; 
            }
        }
        return true;
    }
    int getScore(vector<int>&score , string &t) {
        int counter{}; 
        for(auto&itr:t) {
            counter+=score[(itr-'a')]; 
        }
        return counter;
    }
    int bestAns;
    vector<bool>visited;
    vector<int>freq;
    void dfs(vector<pair<string,int>>&word ,int currAns) {
        for (int i=0; i<word.size(); ++i) {
            if (word[i].second!=INT_MIN && visited[i]==false && possible(word[i].first)) {
                for(auto&itr:word[i].first) {
                    freq[itr-'a']--;
                }
                visited[i] =true;
                dfs(word ,currAns+word[i].second); 
                visited[i] = false;
                for(auto&itr:word[i].first) {
                    freq[itr-'a']++;
                }
            }
        }
        bestAns = max(currAns , bestAns);
    }
public:
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        bestAns = 0;
        visited.resize(words.size());
        freq.resize(30);
        for(auto&itr:letters) {
            freq[itr-'a']++;
        }
        vector<pair<string, int>> wordScore; 
        for(auto&itr:words) {
            if (possible(itr)) {
                wordScore.push_back({itr, getScore(score,itr)}); 
            } else {
                wordScore.push_back({itr , INT_MIN}); 
            }
        }
        dfs(wordScore, 0);
        return bestAns; 
    }
};
