/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
void check(TreeNode* A, TreeNode* B, int* flag)
{
    if((A == NULL && B != NULL) ||(A!=NULL && B == NULL))
    {
        *flag = 0;
        return;
    }
    
    if(A == NULL && B == NULL)
        return;
        
    check(A->left, B->left, flag);
    if(A->val != B->val)
    {
        *flag = 0;
        return;
    }
    check(A->right, B->right, flag);
    
    
    
}

int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    int flag = 1;
    check(A, B, &flag);
    return flag;
}
