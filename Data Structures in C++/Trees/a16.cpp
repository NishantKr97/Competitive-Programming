/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
void levelOrder(TreeNode* A, vector<vector<int> > &v)
{
    stack<TreeNode*> s1;
    stack<TreeNode*> s2;
    bool rtl = true;
    s1.push(A);
    vector<int> p;
    while(!s1.empty())
    {
        TreeNode* ptr = s1.top();
        s1.pop();
        
        
        if(ptr)
        {
            p.push_back(ptr->val);
            
            if(rtl)
            {
                s2.push(ptr->left);
                s2.push(ptr->right);
            }
            else
            {
                s2.push(ptr->right);
                s2.push(ptr->left);
            }
        }
        
        if(s1.empty())
        {
            rtl = !rtl;
            s1.swap(s2);
            if(p.size())
                v.push_back(p);
            p.clear();
        }
    }
    
}
 
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    vector<vector<int> > v;
    levelOrder(A, v);
    
    return v;
    
}
