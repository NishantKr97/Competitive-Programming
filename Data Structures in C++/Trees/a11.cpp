/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void inOrder(TreeNode* A,vector<int> &B)
{
    if(A == NULL)
        return;
 
    inOrder(A->left, B);
    A.push_back()
    inOrder(A->right, B);
    
    return k;    
}
 
int Solution::kthsmallest(TreeNode* A, int B) {
    int n = inOrder(A, B, 0);
    return n;
}
