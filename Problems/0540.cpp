class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int start = 0 ,end = arr.size()-1;
        while(start < end){
            int mid = (start + end)/2;
            if(mid&1){
                if(arr[mid] == arr[mid-1]){
                    start = mid+1;
                }else{
                    end = mid-1;
                }
            }else{
                if(arr[mid] == arr[mid+1]){
                    start = mid+2;
                }else{
                    end = mid;
                }
            }
        }
        return arr[start];
    }
};
