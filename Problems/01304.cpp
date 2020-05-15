class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans;
        if(n&1){
            n--;
            ans.push_back(0);
        } 
        for(int i=0;i<n;i+=2){
            ans.push_back(i+1);
            ans.push_back(-(i+1));
        }
        return ans;
    }   
};
