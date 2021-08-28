class Solution {
public:
    vector<int> peopleIndexes(vector<vector<string>>& favoriteCompanies) {
        const size_t n = favoriteCompanies.size();
        for(auto&itr:favoriteCompanies){
            sort(itr.begin() , itr.end());
        }
        vector<int>result;
        int index{};
        for(auto&itr:favoriteCompanies){
            bool isSubsetPossible = false;
            for(auto&itr1:favoriteCompanies){
                if(itr == itr1) continue;
                if(itr.size() > itr1.size()) continue;
                isSubsetPossible=includes(itr1.begin() , itr1.end() , itr.begin() ,itr.end());
                if(isSubsetPossible)break;
            }
            (not(isSubsetPossible))?result.emplace_back(index++):++index;
        }
        return result;
    }
};
