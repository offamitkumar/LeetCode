class Solution {
    vector<vector<int>>ans;
    void generate(int n,int i , int k, vector<int>&temp) {
        if (k == 0) {
            ans.push_back(temp);
            return ;
        }
        for (; i<=n; ++i) {
            temp.push_back(i); 
            generate(n ,i+1, k-1, temp); 
            temp.pop_back(); 
        }
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int>temp;
        generate(n ,1, k, temp); 
        return ans; 
    }
};

