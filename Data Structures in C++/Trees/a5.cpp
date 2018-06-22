/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int check(TreeNode* A, TreeNode* B)
{
    if(A == NULL && B == NULL)
        return 1;
    if(A == NULL || B == NULL)
        return 0;
        
    check(A->left, B->right);
    if(A->val != B->val)
        return 0;
    check(A->right, B->left);
}

int Solution::isSymmetric(TreeNode* A) {
    if(A == NULL)
        return 1;
    
    isSymm    
        
}
