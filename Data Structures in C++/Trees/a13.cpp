/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
stack<TreeNode*> myStack; 
 
void pushAll(TreeNode* root) {
    if(root == NULL)
        return;
    
    pushAll(root->left);
    myStack.push(root);
    pushAll(root->right);
    
} 



BSTIterator::BSTIterator(TreeNode *root) {
    pushAll(root);
}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext() {
    return !myStack.empty();
}

/** @return the next smallest number */
int BSTIterator::next() {
    TreeNode* p = myStack.top();
    myStack.pop();
    return p->val;
}



/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
