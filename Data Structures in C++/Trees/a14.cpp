/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void inOrder(TreeNode* A, TreeNode** first, TreeNode** middle, TreeNode** last, TreeNode** prev) 
{
    if(A)
    {
    inOrder(A->left, first, middle, last, prev);    
    if(*prev && (A->val) < (*prev)->val)
    {
        if(!*first)
        {
            *first = A;
            *middle = *prev;
        }
        else
            *last = A;
    }
    *prev = A;
    inOrder(A->right, first, middle, last, prev);    
    }
        
    
} 

vector<int> Solution::recoverTree(TreeNode* A) {
    TreeNode* first, *middle, *last, *prev;
    first = middle = last = prev = NULL;
    
    inOrder(A, &first, &middle, &last, &prev);
    vector<int> v;
    
    
    if( first && last )
    {
        v.push_back(first->val);
        v.push_back(last->val);        
    }
    else if( first && middle ) 
    {
        v.push_back(first->val);
        v.push_back(middle->val);
    }
    
    return v;
    
}
