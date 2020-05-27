class Solution {

 public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<pair<int,int>>v;
        for(auto&itr:buildings){
            v.push_back(make_pair(itr[0] , -itr[2]));
            v.push_back(make_pair(itr[1] , itr[2]));
        }
        sort(v.begin() , v.end());
        multiset<int>m{0};
        int pre = 0 , cur =  0;
        for(auto p : v) {
            if( p.second < 0 ) { // starting point
                m.insert( -p.second );
            }else{
                m.erase(m.find(p.second));
            }
            cur = *m.rbegin();
            if(cur != pre) {
                res.push_back(make_pair(p.first , cur));
                pre = cur;
            }
        }
        return res;
    }
};
