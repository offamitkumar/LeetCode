class Solution {
    int MSB(int i){
        return ((-i)&(i));
    }
    vector<int>ftree;
    
    int getSum(int i){
        int sum{};
        while(i){
            sum+=ftree[i];
            i-=MSB(i);
        }
        return sum;
    }
    void updateSum(int MX , int i , int value = 1){
        while(i<=MX && i){
            ftree[i]+=value;
            i+=MSB(i);
        }
    }
public:
    vector<int> countSmaller(vector<int>& nums) {
        vector<int>ans((int)nums.size());
        if(nums.size()==0){
            return ans;
        }
        // you can un-comment these lines to find the exact min value as given constraints for this question 1000 will be feasible for us
        //
        //
        //
        //
       // int min_el = *min_element(nums.begin() , nums.end());
        for(auto&itr:nums){
            itr+=abs(1000); // to make negative number positive 
            //itr+=abs(min_el)+10;
        }
        int max_el = *max_element(nums.begin() , nums.end());
        ftree.assign(max_el+1,0);
        for(int i=(int)nums.size()-1;i>=0;--i){
            ans[i] = getSum(nums[i]-1);
            updateSum(max_el , nums[i]);
        }
        return ans;
    }
};
