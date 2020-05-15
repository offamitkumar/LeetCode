class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>ans;
        for(int i=1;i<arr.size();++i){
            arr[i]=arr[i]^arr[i-1];
        }
        for(auto itr:queries){
            if(itr[0]!=0){
                ans.push_back(arr[itr[0]-1]^arr[itr[1]]);
            }else{
                //cout<<"query "<<itr[0]<<" "<<itr[1]<<endl;
                ans.push_back(arr[itr[1]]);
            }
        }
        return ans;
    }
};
