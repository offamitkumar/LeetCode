class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        vector<string>ans(nums.size());
        vector<pair<int,int>>v(nums.size());
        for(auto i=0;i<(int)nums.size();++i){
            v[i] = make_pair(nums[i] , i);
        }
        sort(v.begin() , v.end());
        bool first ,second , third; first = second = third =false;
        int counter = 4;
        for(int i=(int)nums.size()-1;i>=0;--i){
            if(!first){
                ans[v[i].second] = "Gold Medal";
                first = true;
            }else if(!second){
                ans[v[i].second] = "Silver Medal";
                second = true;
            }else if(!third){
                ans[v[i].second] = "Bronze Medal";
                third = true;
            }else{
                ans[v[i].second] = to_string(counter);
                counter++;
            }
        }
        return ans;
    }
};
