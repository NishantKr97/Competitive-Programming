/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

vector<int> Solution::preorderTraversal(TreeNode* A) {
    vector<int> v; 

    stack<TreeNode* > s;
    s.push(A);
    
    
    while(!s.empty())
    {
        TreeNode* ptr = s.top();
        v.push_back(ptr->val);
        s.pop();
        
        if(ptr->right)
            s.push(ptr->right);
        if(ptr->left)
            s.push(ptr->left);
    }
    
    return v;
}
