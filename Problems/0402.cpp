class Solution {
public:
    string removeKdigits(string num, int k) {
        if(k == num.size()){
            return "0";
        } 
        for(int i=0;i<k;++i){
            int j=0;
            while(j+1 < num.size() && num[j] <= num[j+1]){
                ++j;
            }
            num.erase(j , 1);
        }
        int i=0;
        while(i+1<num.size() && num[i] =='0'){
            i++;
        }
        if(i){
            num.erase(0 , i);
        }
        return num;
    }
};
