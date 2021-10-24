class Solution {
    vector<vector<int>>ans;
    vector<int>temp;
    void generate(int k , int n , int index, int sum=0) {
        if (n == sum && k==0) {
            ans.push_back(temp);
            return ;
        }
        if (sum>n || index>=n || k==0) {
            return ; 
        }
        for(; index <= min(n,9); ++index) {
            temp.push_back(index);
            generate(k-1, n , index+1, sum+index); 
            temp.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        generate(k , n ,1); 
        return ans;
    }
};

