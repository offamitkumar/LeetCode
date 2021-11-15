class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        const int &n = (int)nums.size();
        sort(nums.begin() ,nums.end());
        vector<int>res;
        if(n==0){
            return res;
        }
        vector<int>divi(n,1);
        int max_sum{1};
        for(int i=1; i<n; ++i){
            for(int j=0;j<i;++j){
                if(nums[i]%nums[j]==0 || nums[j]%nums[i]==0){
                    if(divi[i] < divi[j] + 1){
                        divi[i] = divi[j]+1;
                        max_sum = max(max_sum , divi[i]);
                    }
                }
            }
        }
        int pre = 1;
        for(int i=n-1;i>=0;--i){
            if(max_sum == divi[i] && (pre==1 || pre%nums[i]==0)){
                res.push_back(nums[i]);
                pre = nums[i];
                --max_sum;
            }
        }
        return res;
    }
};
