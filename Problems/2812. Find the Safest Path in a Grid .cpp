//
// Created by Amit Kumar on 09/09/23.
//
#include "vector"
#include "queue"
using namespace std;
class Solution {
    const int DSIZE = 4;
    array<int,4>X{-1,1,0,0};
    array<int,4>Y{0,0,-1,1};
public:
    int maximumSafenessFactor(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        const int &n = (int)grid.size();
        const int &m = (int)grid[0].size();
        function<int (int, int)> inRange = [&n, &m](int a, int b) -> int {
            return a >= 0 && b >= 0 && a < n && b < m;
        };
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        for (int i=0; i<n; ++i) {
            for (int j=0; j<m; ++j) {
                if (grid.at(i).at(j)) {
                    q.emplace(i,j);
                    visited[i][j] = true;
                }
            }
        }
        vector<vector<int>> safe(n, vector<int>(m, 0));
        int low{}, high{};
        while (!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for (int i=0; i<DSIZE; ++i) {
                int newX = x + X.at(i);
                int newY = y + Y.at(i);
                if (inRange(newX, newY) and !visited[newX][newY]) {
                    q.emplace(newX, newY);
                    visited[newX][newY] = true;
                    safe[newX][newY] = safe[x][y] + 1;
                    high = max(high, safe[newX][newY]);
                }
            }
        }
        auto possible = [&] (int ans) -> bool {
            queue<pair<int,int>>q;
            vector<vector<bool>> visited1(n, vector<bool>(m, false));
            if (safe[0][0] >= ans) {
                q.emplace(0, 0);
                visited[0][0] = true;
            }
            while (!q.empty()) {
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                if (x == n-1 && y == m-1) {
                    return true;
                }
                for (int i=0; i<DSIZE; ++i) {
                    int newX = x + X.at(i);
                    int newY = y + Y.at(i);
                    if (inRange(newX, newY) and !visited1[newX][newY] and safe[newX][newY] >= ans) {
                        q.emplace(newX, newY);
                        visited1[newX][newY] = true;
                    }
                }
            }
            return false;
        };
        int ans{};
        while (low <= high) {
            int mid = (low + high) / 2;
            if (possible(mid)) {
                low = mid + 1;
                ans = mid;
            } else {
                high = mid - 1;
            }
        }
        return low;
    }
};