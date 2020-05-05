class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        int arr[10][10]={
            {1,12,123,1234,12345,123456,1234567,12345678,123456789},
            {2,23,234,2345,23456,234567,2345678,23456789},
            {3,34,345,3456,34567,345678,3456789},
            {4,45,456,4567,45678,456789},
            {5,56,567,5678,56789},
            {6,67,678,6789},
            {7,78,789},
            {8,89},
            {9}
        };
        vector<int>ans;
        for(int i=0;i<10;++i){
            for(int j=0;j<10;++j){
                if(arr[i][j]>=low and arr[i][j]<=high){
                    ans.emplace_back(arr[i][j]);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
