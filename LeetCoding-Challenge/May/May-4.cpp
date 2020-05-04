class Solution {
public:
    int findComplement(long long num) {
        long long ans=0;
        for(long long i=0;((long long)1<<i)<=num;++i){
            if((num&((long long)1<<i) )== 0){
                ans+=(1<<i);
            }
        }
        return ans;
    }
};
