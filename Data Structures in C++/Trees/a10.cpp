/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
int mid(int s, int h)
{
    int m = (s+h) / 2;
    return m;
}

TreeNode* Sort(vector<int> &A, int start, int end)
{
    if(start > end)
        return NULL;
        
    int m = mid(start, end);
    
    TreeNode* root = new TreeNode(A[m]);
    
    root->left = Sort(A, start, m-1);
    root->right = Sort(A, m+1, end);
    
    return root;    
}
 
TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {
    
    return Sort(A, 0, A.size()-1);
}
