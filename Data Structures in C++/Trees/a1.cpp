/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int> v;
    stack<TreeNode*> s;
    
    TreeNode* curr = A;
    //s.push(curr);
    // v.push_back(curr->val);
    
    while(1)
    {
        if(curr != NULL && curr->val != -1)
        {
            s.push(curr);
            curr = curr->left;
        }
        else
        {
            if(!s.empty())
            {
                v.push_back(s.top()->val);
                curr = s.top();
                s.pop();
                curr = curr->right;
            }
            else
                break;
        }
    }
    
    return v;
    
}
