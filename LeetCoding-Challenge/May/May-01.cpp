class Solution {
    public:
        int firstBadVersion(int n) {
            long long ans = -1;
            long long start = 1 , end = n;
            while(start<=end){
                long long mid = (start+end)/2;
                if(isBadVersion(mid)){
                    ans = mid;
                    end = mid-1;

                }else{
                    start = mid+1;

                }

            }
            return ans;

        }
        
};
