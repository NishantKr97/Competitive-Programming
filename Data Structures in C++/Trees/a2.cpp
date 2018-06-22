/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode* A) {
    stack<TreeNode*> s;
    
    s.push(A);
    vector<int> v;
    while(!s.empty())
    {
        v.push_back(s.top()->val);
        TreeNode* ptr = s.top();
        s.pop();
        
        if(ptr->left)
            s.push(ptr->left);
        if(ptr->right)
            s.push(ptr->right);
    }
    
    reverse(v.begin(), v.end());
    return v;
}
