/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int height(TreeNode* A)
{
    if(A == NULL)
        return 1;
        
    int l = height(A->left)+1;
    int r = height(A->right)+1;
    
    return max(l, r);
}

int Solution::isBalanced(TreeNode* A) {
    if(A == NULL)
        return 1;
        
    int l = height(A->left);
    int r = height(A->right);
    
    if(abs(l-r) <= 1 && isBalanced(A->left) && isBalanced(A->right))
        return 1;
    return 0;
    
    
    
}
