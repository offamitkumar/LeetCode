class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust){ 
        if(N==0){
            return -1;
        }
        if(N==1 && trust.size()==0){
            return 1;
        }else if(N==1 && trust.size()!=0){
            return -1;
        }
        vector<int>v(N+1) , u(N+1);
        int x=0 , index{};
        for(auto&itr:trust){
            ++v[itr[1]];
            ++u[itr[0]];
            if(x<v[itr[1]]){
                x = v[itr[1]];
                index = itr[1];
            }
        }
        cout<<index<<endl;
        if(v[index]==(N-1) && u[index]==0){
            return index;
        }else{
            return -1;
        }
    }
};
