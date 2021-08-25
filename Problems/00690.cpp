/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
    int counter{};
    set<int>visited;
    void dfs(vector<Employee*>graph , int r) {
        if (visited.find(r) != visited.end())
            return; 
        visited.insert(r);
        for(auto&itr:graph) {
            if (itr->id == r) {
                counter+= itr->importance; 
                for(auto&i:itr->subordinates) {
                    dfs(graph , i);
                }
            }
        }
    }
public:
    int getImportance(vector<Employee*> employees, int id) {
        dfs(employees , id);
        return counter;
    }
};
