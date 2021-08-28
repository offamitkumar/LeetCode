class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        map<int,int>mp;
        for(const auto &itr:nums){
            mp[itr]++;
        }
        for(auto itr=mp.begin();itr!=mp.end();++itr){
            while(itr->second!=0){
                for(int i=0;i<k;++i){
                    if(mp[itr->first+i]<=0){
                        return false;
                    }else{
                        mp[itr->first+i]--;
                    }
                }
            }
        }
        return true;
    }
};
