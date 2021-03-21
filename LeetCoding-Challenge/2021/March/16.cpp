class Solution {
    public:
        bool reorderedPowerOf2(int N) {
            vector<int>v; 
            while (N) {
                v.push_back(N%10ll); 
                N/=10ll;
            }
            sort(v.begin(),v.end()); 
            do{
                if (v.at(0) != 0) {
                    N=0ll;
                    for (int i=0; i<(int)v.size(); ++i) {
                        N*=10ll;
                        N+=v.at(i);
                    }
                    if ( N && (!(N & (N-1)))) {
                        return true;
                    }
                }
            }while(next_permutation(v.begin(), v.end())); 
            return false;
        }
};
