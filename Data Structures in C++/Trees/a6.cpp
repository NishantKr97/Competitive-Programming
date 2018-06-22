/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

TreeNode* invert(TreeNode* A) 
{
    if(A == NULL)
        return NULL;
        
    // if(A == NULL && B != NULL)
    //     return invert()
    
    invert(A->left);
    invert(A->right);
    
    TreeNode* temp = A->left;
    A->left = A->right;
    A->right = temp;
    
    return A;
}

TreeNode* Solution::invertTree(TreeNode* A) {
    if(A == NULL)
        return NULL;
        
    // if(A == NULL && B != NULL)
    //     return invert()
    
    invert(A->left);
    invert(A->right);
    
    TreeNode* temp = A->left;
    A->left = A->right;
    A->right = temp;
    
    return A;
}
