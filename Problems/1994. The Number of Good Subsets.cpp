class Solution {
    map<int64_t,int64_t>fre;
    vector<int64_t>nums;
    vector<int64_t>p = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };
    int64_t n;
    int64_t mod = 1e9+7;
    int64_t dfs(int64_t index , int64_t mask) {
        if (index == n) {
            return 1;
        }
        int64_t ans = dfs(index+1 , mask);
        bool okay=true;
        for (int64_t i=0; i<p.size(); ++i) {
            if (nums[index]%p[i]==0){
                if ((mask&(1<<i))) {
                    okay = false;
                    break;
                } else {
                    mask|=(1<<i);
                }
            }
        }
        if(okay && nums[index]%4!=0 && nums[index]%9!=0 && nums[index]%25!=0) {
            ans %= mod; 
            ans = (ans+((dfs(index+1ll , mask)%mod)* fre[nums[index]])%mod)%mod;
        }
        return ans; 
    }
    int64_t pow(int64_t num , int64_t pw) {
        int64_t N = 1;
        for(int64_t i=0; i<pw;++i){
            N = (N*num)%mod;
        }
        return N%mod;
    }
public:
    int numberOfGoodSubsets(vector<int>& ns) {
        for (auto&itr:ns) {
            fre[itr]++;
            if (fre[itr]==1 && itr!=1) {
                this->nums.push_back(itr);
            }
        }
        this->n = this->nums.size();
        int64_t ans = dfs(0,0)-1;
        int64_t pw = pow(2,fre[1])%mod; 
        return (ans * pw)%mod;
    }
};
