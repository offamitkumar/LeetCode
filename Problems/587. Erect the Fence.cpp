class Solution {
    int distance(vector<int>&a , vector<int>&b, vector<int>&c) {
        int y1 = a[1] - b[1]; 
        int y2 = a[1] - c[1]; 
        int x1 = a[0] - b[0]; 
        int x2 = a[0] - c[0]; 
        if ((x1*x1+y1*y1) < (x2*x2+y2*y2)) {
            return -1; 
        } else {
            return 1;
        }
    }
    int cross(vector<int>&a , vector<int>&b, vector<int>&c) {
        int y1 = a[1] - b[1]; 
        int y2 = a[1] - c[1]; 
        int x1 = a[0] - b[0]; 
        int x2 = a[0] - c[0]; 
        return y2 * x1 - y1 * x2; 
    }
public:
    vector<vector<int>> outerTrees(vector<vector<int>>& trees) {
        vector<vector<int>>res; 
        vector<int> start = trees[0]; 
        int n = trees.size();
        if (n==1) {
            return trees;
        }

        for (int i=1; i<n; ++i) {
            if (start[0] > trees[i][0]) {
                start = trees[i];
            }
        }
        set<vector<int>>r; 
        vector<int>current = start; 
        vector<vector<int>> collinear; 
        r.insert(start);
        while (true) {
            vector<int> ntarget = trees[0]; 
            for (int i=1; i<n; ++i) {
                if ( current[0] == trees[i][0] && current[1] == trees[i][1]) {
                    continue;
                }
                int cp = cross(current , ntarget , trees[i]);
                if (cp > 0) {
                    ntarget = trees[i]; 
                    collinear.clear();
                } else if(cp==0){
                    if (distance(current ,ntarget , trees[i]) < 0) {
                        collinear.push_back(ntarget); 
                        ntarget = trees[i];
                    } else {
                        collinear.push_back(trees[i]);
                    }
                }
            }
            for(auto&it:collinear) {
                r.insert(it);
            }
            if (ntarget[0] == start[0] && ntarget[1] == start[1]) {
                break;
            }
            r.insert(ntarget); 
            current = ntarget;
        }
        for(auto&it:r) {
            res.push_back(it);
        }
        return res;
    }
};
