/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
int t(void) {
    ios_base::sync_with_stdio(0); 
    cin.tie(nullptr); 
    cout.tie(nullptr);
    return 0;
}
static int x = t(); 
class Solution {
    string res, temp; 
    bool found; 
    void dfs(TreeNode*root, int startValue) {
        if (root == nullptr) 
            return; 
        if (found) {
            return ;
        }
        if (startValue == root->val) {
            temp = res; 
            found = true; 
            return ;
        }
        res.push_back('L'); 
        dfs(root->left , startValue); 
        res.pop_back(); 
        res.push_back('R'); 
        dfs(root->right, startValue); 
        res.pop_back(); 
    }
public:
    string getDirections(TreeNode* root, int startValue, int destValue) {
        res="";
        temp = ""; 
        found = false; 
        dfs(root, startValue); 
        string start = temp; 
        res = ""; 
        found = false; 
        dfs(root, destValue); 
        int i{}, j{}; 
        while (i<start.size() && j<temp.size()) {
            if (start[i] == temp[j]) {
                ++i; 
                ++j; 
            } else break; 
        }
        string ans{}; 
        while (i<start.size()) {
            ans+='U'; 
            ++i; 
        }
        while (j<temp.size()) {
            ans+=temp[j]; 
            ++j;
        }
        return ans; 
    }
};

