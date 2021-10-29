class MovieRentingSystem {
    map<pair<int,int>,int> price; // {{movie , shop}, price} 
    set<pair<int, pair<int,int>>>rented; // {price , {shop , movie}}
    unordered_map<int, set<pair<int,int>>>unrented;  // movie -> (price, shop)
public:
    MovieRentingSystem(int n, vector<vector<int>>& entries) {
        for (int i=0; i<entries.size(); ++i) {
            int shop = entries[i][0]; 
            int movie = entries[i][1]; 
            int pr= entries[i][2]; 
            price[make_pair(movie, shop)] = pr; 
            unrented[movie].insert(make_pair(pr, shop));
        }
    }
    
    vector<int> search(int movie) {
        vector<int>ans; 
        if (unrented.find(movie) != unrented.end()) {
            for (auto itr=unrented[movie].begin(); itr != unrented[movie].end(); ++itr) {
                ans.push_back(itr->second);
                if (ans.size() == 5) {
                    break; 
                }
            }
        }
        return ans; 
    }

    void rent(int shop, int movie) {
        int pr = price[make_pair(movie, shop)]; 
        unrented[movie].erase(make_pair(pr, shop)); 
        rented.insert({pr,{shop, movie}});
    }
    
    void drop(int shop, int movie) {
        int pr = price[make_pair(movie, shop)]; 
        unrented[movie].insert(make_pair(pr, shop)); 
        rented.erase({pr,{shop, movie}});
    }
    
    vector<vector<int>> report() {
        vector<vector<int>>ans;  // (shop , movie)
        for (auto&itr:rented) {
            ans.push_back({itr.second.first, itr.second.second});
            if (ans.size() == 5) {
                break; 
            }
        }
        return ans; 
    }
};

/**
 * Your MovieRentingSystem object will be instantiated and called as such:
 * MovieRentingSystem* obj = new MovieRentingSystem(n, entries);
 * vector<int> param_1 = obj->search(movie);
 * obj->rent(shop,movie);
 * obj->drop(shop,movie);
 * vector<vector<int>> param_4 = obj->report();
 */
