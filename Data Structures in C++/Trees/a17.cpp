/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
void Solution::connect(TreeLinkNode* A) {
    queue<TreeLinkNode*> q;
    queue<TreeLinkNode*> t;
    q.push(A);
    A->next = NULL;
    
    TreeLinkNode* ptr1;
    TreeLinkNode* ptr2;
    while(!q.empty())
    {
        ptr1 = q.front();
        q.pop();
        
        if(ptr1->left)
            t.push(ptr1->left);
        if(ptr1->right)
            t.push(ptr1->right);
            
        if(!q.empty())
            ptr1->next = q.front();
        
        if(q.empty() && !t.empty())
            q.swap(t);
        
    }
    
}
