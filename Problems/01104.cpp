class Solution {
public:
    vector<int> pathInZigZagTree(int label) {
        vector<int>ans; 
        int currentNode = 1, currentLevelNodes=1;
        deque<int>q; q.push_front(currentNode); 
        bool last= true;
        while (!q.empty()) {
            int temp = currentLevelNodes+1; 
            currentLevelNodes = 2 * currentLevelNodes+1; 
            currentLevelNodes = min(label , currentLevelNodes);
            if (last) {
                ans.push_back(q.back()); 
            } else {
                ans.push_back(q.front());
            }
            while(!q.empty()) q.pop_front();
            while (temp <= currentLevelNodes) {
                if (last) {
                    q.push_front(temp);
                } else {
                    q.push_back(temp);
                }
                temp++;
            }
            last = (!last);
        }
        return ans; 
    }
};
