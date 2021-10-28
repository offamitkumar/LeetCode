class Solution {
public:
    int trapRainWater(vector<vector<int>>& heightMap) {
        int n = heightMap.size(); 
        int m = heightMap[0].size(); 
        int ans{}; 
        const int DSIZE = 4;
        array<int,4>X{-1,1,0,0};
        array<int,4>Y{0,0,-1,1};
        priority_queue<pair<int,pair<int,int>> , vector<pair<int,pair<int,int>>> , greater<pair<int,pair<int,int>>>>pq; 
        vector<vector<bool>>visited(n , vector<bool>(m,false)); 
        for (int i=0; i<n; ++i) {
            for (int j=0; j<m; ++j) {
                if (j==0 || i == 0 || i==n-1 || j==m-1) {
                    pq.push({heightMap[i][j], {i,j}}); 
                    visited[i][j] = true;
                }
            }
        }
        int min_height = 0; 
        while (!pq.empty()) {
            int ht = pq.top().first; 
            int r = pq.top().second.first; 
            int c = pq.top().second.second; 
            min_height = max(min_height , ht); 
            pq.pop();
            for (int i=0; i<DSIZE; ++i) {
                int x = r+X[i]; 
                int y = c+Y[i]; 
                if (x>=0 && y>=0 && x<n && y<m && visited[x][y]==false) {
                    pq.push({heightMap[x][y] , {x,y}});
                    visited[x][y] = true; 
                    if (min_height>heightMap[x][y]) {
                        ans += (min_height-heightMap[x][y]); 
                    }
                }
            }
        }
        return ans; 
    }
};
