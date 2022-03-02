class Solution {
public:
    bool canConstruct(string a, string b) {
        string c(1000 , 'x');
        sort(a.begin() , a.end());
        sort(b.begin() , b.end());
        return (set_intersection(a.begin() , a.end() , b.begin() , b.end() , c.begin())- c.begin()) == a.size();
    }
};
