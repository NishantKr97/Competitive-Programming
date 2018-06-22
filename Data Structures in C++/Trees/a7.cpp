/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
int Solution::maxDepth(TreeNode* A) {
    if(A == NULL)
        return 0;
        

    int lDepth = maxDepth(A->left);
    int rDepth = maxDepth(A->right);
    
    if(lDepth > rDepth)
        return lDepth+1;
    else
        return rDepth+1;
}
