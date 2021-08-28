class Solution {
    double dist(vector<int>p)noexcept{
        return (double)sqrt(p[0]*p[0] + p[1]*p[1]);
    }
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        auto comparator = [](vector<int>p1, vector<int>p2){
            double dist_one =  (double)sqrt(p1[0]*p1[0] + p1[1]*p1[1]);
            double dist_two =  (double)sqrt(p2[0]*p2[0] + p2[1]*p2[1]);
            return dist_one < dist_two;
        };
        priority_queue<vector<int>, vector<vector<int>>, decltype(comparator)>pq(comparator);
        for (auto & itr : points) {
            if (pq.size() < K) {
                pq.push(itr);
            } else {
                if (dist(pq.top()) > dist(itr)){
                    pq.pop();
                    pq.push(itr);
                }
            }
        }
        vector<vector<int>>res;
        while(!pq.empty()){
            res.push_back(pq.top());
            pq.pop();
        }
        return res;
    }
};


// Approach 2nd =>  By Sorting
/*
  
 class Solution {
     static bool comparator(vector<int>&p1, vector<int>&p2){
         double dis_one = sqrt(p1[0]*p1[0] + p1[1]*p1[1]);
         double dis_two = sqrt(p2[0]*p2[0] + p2[1]*p2[1]);
         return dis_one < dis_two;
     }
 public:
     vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
         sort(points.begin(), points.end(), comparator);
         vector<vector<int>>res;
         for(int i = 0; i < K; ++i) {
             res.push_back(points[i]);
         }
         return res;
     }
 };

 */
