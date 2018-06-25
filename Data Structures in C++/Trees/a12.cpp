/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
void inOrder(TreeNode* A, vector<int> &C)
{
    if(A == NULL)
        return;
        
    inOrder(A->left, C);
    C.push_back(A->val);
    inOrder(A->right, C);
}

int find(TreeNode* A, int k)
{
    int u;
    if(A == NULL)
    {
        u = 0;
        return u;
    }
        
    
    find(A->left, k);
    if(k == A->val)
    {
        u = 1;
        return u;
    }
    find(A->right, k);
    
    return u;
}

int Solution::t2Sum(TreeNode* A, int B) {
    vector<int> C;
    inOrder(A, C);
    
    int i, n = C.size();
    for(i=0;i<n;i++)
    {
        if(C[i] != B-C[i])
            if(binary_search(C.begin(), C.end(), B-C[i]))
                return 1;
            
    }
    
    return 0;
}
