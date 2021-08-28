class Solution {
public:
    bool isValidSerialization(string preorder) {
        vector<string>v; 
        stringstream input(preorder); 
        string s; 
        while (getline(input , s , ',')) {
            v.push_back(s);
        }
        int ans=1; 
        for(int i=0; i<v.size(); ++i) {
            if (ans==0) return false;
            if (v.at(i) == "#") {
                ans--;
            } else {
                ans++;
            }
        }
        return ans==0?true:false;
    }
};
