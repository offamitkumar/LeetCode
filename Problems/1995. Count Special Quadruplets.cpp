class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int n =nums.size();
        int counter{};
        for (int i=0; i<n; ++i) {
            for (int j=i+1; j<n;++j) {
                for (int k=j+1; k<n; ++k) {
                    for (int l=k+1; l<n; ++l) {
                        counter+= (nums[i]+nums[j]+nums[k]==nums[l]);
                    }
                }
            }
        }
        return counter;
    }
};
