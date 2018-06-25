/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
void path(TreeNode* A, int sum, int currSum, vector<int> &p, vector<vector<int> > &v)
{
    if(A == NULL)
        return;
        
    currSum += A->val;
    p.push_back(A->val);
    
    if(currSum == sum && A->left == NULL && A->right == NULL)
        v.push_back(p);
    
    if(A->left)
        path(A->left, sum, currSum, p, v);
    if(A->right)
        path(A->right, sum, currSum, p, v);
        
    p.pop_back();
}
 
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    vector<int> p;
    vector<vector<int> > v;
    path(A, B, 0, p, v);
    
    return v;
}
