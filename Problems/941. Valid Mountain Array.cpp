class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        const int&n = arr.size(); 
        if (n<3) return false; 
        bool ok1=false, ok2 = false; 
        int i=0; 
        for (i=0; i<n-1; ++i) {
            if (arr[i] < arr[i+1]) {
                ok1 = true;
            } else {
                break;
            }
        }
        for (;i<n-1; ++i) {
            if (arr[i]>arr[i+1]) {
                ok2 = true;
            }else {
                ok2 = false; 
                break;
            }
        }
        return ok1&&ok2; 
    }
};
