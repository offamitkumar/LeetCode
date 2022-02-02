bool compare(pair<int,int>&a, pair<int,int>&b) {
    return a.second > b.second; 
}
class Twitter {
    int number; 
    map<int, vector<pair<int,int>>>tweet; // userid ->  (tweetid, number)
    map<int, set<int>>follwing; 
public:
    Twitter() {
        number = 1; 
        tweet.clear(); 
    }
    
    void postTweet(int userId, int tweetId) {
        follwing[userId].insert(userId); 
        tweet[userId].push_back(make_pair(tweetId, number++)); 
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int>res; 
        priority_queue<pair<int,int>, vector<pair<int,int>>, function<bool(pair<int,int>&a, pair<int,int>&)>>pq(compare); 
        for (auto&user:follwing[userId]) {
            for (auto itr = tweet[user].rbegin(); itr != tweet[user].rend(); ++itr) {
                if (pq.size() < 10) {
                    pq.push(*itr); 
                } else if (pq.top().second < (*itr).second) {
                    pq.pop(); 
                    pq.push(*itr); 
                }
            }
        }
        while (!pq.empty()) {
            res.push_back(pq.top().first); 
            pq.pop(); 
        }
        reverse(res.begin(), res.end()); 
        return res; 
    }
    
    void follow(int followerId, int followeeId) {
        follwing[followerId].insert(followeeId); 
    }
    
    void unfollow(int followerId, int followeeId) {
        follwing[followerId].erase(followeeId); 
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */
