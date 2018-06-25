/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int pathSum(TreeNode* A, int sum, int B)
{
    if(A == NULL)
        return 0;

    if(A->left == NULL && A->right == NULL)
        if(sum == B)
            return 1;
    int ans = 0;        
    if(A->left)
        ans = pathSum(A->left, sum+A->val, B);
    if(A->right)
        ans = pathSum(A->right, sum+A->val, B);
        
    return ans;
        
}
 
int Solution::hasPathSum(TreeNode* A, int B) {
    return pathSum(A, 0, B);
}
