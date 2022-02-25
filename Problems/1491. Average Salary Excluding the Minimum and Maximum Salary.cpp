class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end()); 
        const int&n = salary.size(); 
        double sum{}; 
        for (int i=1; i<(n-1); ++i) {
            sum+=salary[i]; 
        }
        return sum/(n-2); 
    }
};
