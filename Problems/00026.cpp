class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int counter{};
        int j =1;
        for(auto i=0; i<(int)arr.size(); ++i){
            int k = i;
            while(i<(int)arr.size() && arr[k] == arr[i] ){
                ++i;
            }
            --i;
            ++counter;
            if(k==0)continue;
            
            swap(arr[j++] , arr[i]);
        }
        return counter;
    }
};
