class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end(), greater<int>()); 
        int i =0, j = people.size()-1; 
        int counter{};
        while (i<=j) {
            if (people[i] + people[j] <= limit) {
                --j; 
            } 
            ++i; 
            ++counter; 
        }
        return counter;
    }
};
