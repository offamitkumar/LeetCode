class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = (int)nums.size()-1;
        cout<<j<<endl;
        int counter{};
        for(int i=0;i<(int)nums.size() && i<=j;++i){
            while(j>=0 && nums[j] == val){
                --j;
            }
            if(i<=j && j>=0 && nums[i] == val){
                swap(nums[i] , nums[j]);
                --j;
                ++counter;
            }
        }
        return max(0 , j+1);
    }
};
