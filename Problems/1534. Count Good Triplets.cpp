class Solution {
    public:
        int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
            int counter{};
            int n = arr.size();
            for(int i=0; i<n; ++i) {
                for(int j=i+1; j<n; ++j) {
                    for(int k=j+1; k<n; ++k) {
                        int x =(abs(arr[i]-arr[j])<=a &&  abs(arr[j]-arr[k])<=b && abs(arr[i]-arr[k])<=c);
                        counter+=x;
                    }
                }
            }
            return counter;
        }
};
