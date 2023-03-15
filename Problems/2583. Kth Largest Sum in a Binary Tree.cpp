//
// Created by Amit Kumar on 15/03/23.
//
#include "queue"
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    long long kthLargestLevelSum(TreeNode *root, int k) {
      priority_queue<int64_t, vector<int64_t>, greater<int64_t>>pq;
      queue<TreeNode*>q;
      q.push(root);
      while (!q.empty()) {
        size_t n = q.size();
        int64_t sum = 0;
        for (int i=0; i<n; ++i) {
          sum += (std::int64_t)q.front()->val;
          if (q.front()->left)
            q.push(q.front()->left);
          if (q.front()->right)
            q.push(q.front()->right);
          q.pop();
        }
        pq.push(sum);
        if (pq.size() > k) {
          pq.pop();
        }
      }
      if (pq.size() < k) {
        return -1;
      }
      return pq.top();
    }
};