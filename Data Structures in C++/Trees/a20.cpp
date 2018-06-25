/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

bool findPath(TreeNode* A, int B, vector<int> &v)
{
    if(A == NULL)
        return false;
        
    v.push_back(A->val);
    if(B == A->val)
        return true;
    
    if( (A->left && findPath(A->left, B, v)) || ( (A->right) && (findPath(A->right, B, v)) ))
        return true;
        
    v.pop_back();
    return false;
}
 
int Solution::lca(TreeNode* A, int B, int C) {
    vector<int> p1, p2;
    
    if(!findPath(A, B, p1) || !findPath(A, C, p2))
        return -1;
    
    int i, n1 = p1.size(), n2 = p2.size();
    int n3 = min(n1, n2);
    // if(n3 == 1)
    //     return A->val;
    for(i=0;i<n1 && i<n2;i++)
    {
        if(p1[i] != p2[i])
            break;
    }
    
    return p1[i-1];
}
