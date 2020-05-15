class Solution {
public:
    int search(vector<int>& arr, int target) {
        if(!arr.size())
            return -1; // consider -1 as NULL here 
        auto get = [&](int start , int end)->int{
            int mid ; 
            if(arr[start] == target){
                return start;
            }else if(arr[end] == target){
                return end;
            }
            while(start<=end){
                mid = (start+end)/2;
                if(arr[mid] == target){
                    return mid;
                }
                if(arr[start] <= arr[mid]){ // we assumed that this is sorted
                    if(target>=arr[start] and target<=arr[mid]){
                        end = mid-1;
                    }else{
                        start = mid+1;
                    }
                }else if(arr[mid]<=target and target<=arr[end]){ // we now assume that [mid , end] portion is sorted and target value is there 
                    start = mid+1;
                }else{ // [start , mid] is not sorted and if [start , mid] isn't sorted than we claim that [mid+1 , end] will be sorted and if target isn't present there , now we will look for the target in unsorted portion 
                    end = mid-1;
                }
            }
            return -1;

        };
        return get(0 , arr.size()-1);
    }
};
