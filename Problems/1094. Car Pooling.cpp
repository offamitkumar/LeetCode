bool compare(vector<int>&a, vector<int>&b) {
    return a[1] < b[1]; 
}
bool compare1(vector<int>&a, vector<int>&b) {
    return a[2] > b[2]; 
}
class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        sort(trips.begin(), trips.end(), compare); 
        int counter{}; 
        const int&n = trips.size(); 
        priority_queue<vector<int> ,vector<vector<int>> , function<bool(vector<int>&a,vector<int>&)>>inside(compare1); 
        for (int i=0; i<n; ++i) {
            int people = trips[i][0]; 
            int current_time = trips[i][1]; 
            while (!inside.empty() && inside.top()[2] <= current_time) {
                counter-=inside.top()[0]; 
                inside.pop(); 
            }
            counter+=people; 
            if (counter > capacity) {
                return false; 
            }
            inside.push(trips[i]); 
        }
        return true; 
    }
};
