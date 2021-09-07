using tp = tuple<double, int,int>; 
class Solution {
    static bool compare(tp&a, tp&b) {
        return get<0>(a) < get<0>(b);
    }
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<tp, vector<tp>, function<bool(tp&,tp&)>>pq(compare);
        for (int i=0; i<arr.size(); ++i) {
            for (int j=0; j<arr.size(); ++j) {
                double d = double(arr[i])/double(arr[j]);
                if (pq.size() < k) {
                    pq.push(make_tuple(d,arr[i],arr[j])); 
                } else if (get<0>(pq.top()) > d) {
                    pq.pop(); 
                    pq.push(make_tuple(d , arr[i], arr[j]));
                }
            }
        }
        return {get<1>(pq.top()), get<2>(pq.top())};
    }
};
