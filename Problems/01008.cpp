class Solution {
    int currentPosition = 0;
    TreeNode* constructBinaryTree(TreeNode* root , const int n , vector<int>& preorder , int leftRange , int rightRange) {
        if ( currentPosition >= n || (preorder[currentPosition] <= leftRange || preorder[currentPosition] >= rightRange)) {
            return root;
        }
        root = new TreeNode(preorder[currentPosition++]);
        root -> left = constructBinaryTree(root -> left , n , preorder , leftRange , preorder[currentPosition-1] );

        if ( currentPosition >= n || (preorder[currentPosition] <= leftRange || preorder[currentPosition] >= rightRange)) {
            return root;
        }
        root -> right = constructBinaryTree(root -> right , n , preorder , preorder[currentPosition-1], rightRange );
        return root;
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        currentPosition = 1;
        TreeNode*root = new TreeNode(preorder[0]);
        const int n = static_cast< int > ( preorder.size() );
        if (n == 1) {
            return root;
        }
        root -> left = constructBinaryTree(root->left, n, preorder, numeric_limits<int>::min(), preorder[0]);
        if(currentPosition == n){
            return root;
        }
        root -> right = constructBinaryTree(root->right, n, preorder, preorder[0] , numeric_limits<int>::max());
        return root;
    }
};
