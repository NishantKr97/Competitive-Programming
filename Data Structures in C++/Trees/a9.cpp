/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int max(vector<int> &A, int l, int h)
{
    int m = INT_MIN, index;
    int i, n = A.size();
    for(i=l;i<=h;i++)
        if(A[i] > m){ m = A[i]; index = i; }
            
    return index;
}

TreeNode* build(vector<int> &A, int start, int end)
{
    if(start > end)
        return NULL;
        
    int index = max(A, start, end);
    
    TreeNode* B = new TreeNode(A[index]);
    
    B->left = build(A, start, index-1);
    B->right = build(A, index+1, end);
    
    return B;
}
 
TreeNode* Solution::buildTree(vector<int> &A) {
    return build(A, 0, A.size()-1);
}
