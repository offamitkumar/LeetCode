class Solution {
    int n,m;
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        n = mat.size(); 
        m = mat[0].size(); 
        for(int i=0; i<n; ++i) {
            hsort(mat , i , 0);
        }
        for(int i=0; i<m; ++i) {
            hsort(mat , 0 , i);
        }
        return mat;
    }
    void hsort(vector<vector<int>>&mat , int row ,int col) {
        priority_queue<int , vector<int> , greater<int>>pq; 
        int i=row , j = col; 
        while(i<n && j<m) {
            pq.push(mat[i++][j++]);
        }
        while(!pq.empty()) {
            mat[row++][col++] = pq.top();
            pq.pop();
        }
    }
};


// bruteforce solution

class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        map<int,vector<int>>mp; 
        int n = mat.size(); 
        int m = mat[0].size();
        for(int i=0; i<n; ++i) {
            for(int j=0; j<m; ++j) {
                mp[i-j].push_back(mat[i][j]);
            }
        }
        for(auto&itr:mp){
            sort(itr.second.begin(),itr.second.end());
        }
        for(int i=0; i<n; ++i) {
            for(int j=0; j<m; ++j) {
                mat[i][j] = mp[i-j].front();
                mp[i-j].erase(mp[i-j].begin());
            }
        }
        return mat;
    }
};
