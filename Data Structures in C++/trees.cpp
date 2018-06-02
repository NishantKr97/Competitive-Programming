#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int value;
        Node* left;
        Node* right;
};

class Tree{
    public:
        Node* root;

    public:

        Node* newNode(int value)
        {
            Node* temp = new Node;
            temp->value = value;
            temp->left = NULL;
            temp->right = NULL;
            return temp;
        }

        void addNode(Node* temp, int value)
        {
            //Node* temp = new Node();
            queue<Node* > q;
            q.push(temp);

            while(!q.empty())
            {
                Node* p = q.front();
                q.pop();

                if(!p->left)
                {
                    p->left = newNode(value);
                    break;
                }
                else
                        q.push(p->left);
                if(!p->right)
                {
                    p->right = newNode(value);
                    break;
                }
                else
                    q.push(p->right);
            }

        }

        void inOrder(Node* root)
        {
            if(root == NULL)
                return;
            preOrder(root->left);
            cout<<root->value<<" ";
            preOrder(root->right);
        }

        void preOrder(Node* root)
        {
            if(root == NULL)
                return;
            cout<<root->value<<" ";
            preOrder(root->left);
            preOrder(root->right);
        }

        void postOrder(Node* root)
        {
            if(root == NULL)
                return;
            preOrder(root->left);
            preOrder(root->right);
            cout<<root->value<<" ";
        }

    void inOrderwithoutRec(Node* root)
    {
        stack<Node*> s;
        Node* curr = root;
        s.push(curr);
        while(1)
        {
            if(curr != NULL)
            {
                s.push(curr);
                curr = curr->left;
                continue;
            }
            else
            {
                if(!s.empty())
                {
                    curr = s.top();
                    s.pop();
                    cout<<curr->value<<" ";
                    curr = curr->right;
                }
                else
                    break;
            }
        }
    }

};

int searchForNextFunc(int in[], int x, int n)
{
    for(int i=0;i<n;i++)
        if(in[i] == x)
            return i;
    return -1;
}

void printPostFromInAndPre(int in[], int pre[], int n)
{
    int root = searchForNextFunc(in, pre[0], n);

    if(root != 0)
            printPostFromInAndPre(in, pre+1, root);
    if(root != n-1)
        printPostFromInAndPre(in+root+1, pre+root+1, n-root-1);

    cout<<pre[0]<<" ";
}


int main()
{
    int i,j,k,n;

    //Creating a Root
    Node* root = new Node;
    root->value = 1;
    root->left = NULL;
    root->right = NULL;


    Tree* t = new Tree;
    t->addNode(root, 2);
    t->addNode(root, 3);
    t->addNode(root, 4);
    t->addNode(root, 5);
    t->addNode(root, 6);
    t->addNode(root, 7);
    t->addNode(root, 8);
    t->addNode(root, 9);
    t->addNode(root, 10);

    /*cout<<"\nPreOrder Traversal : ";
    //t->preOrder(root);

    cout<<"\nInOrder Traversal : ";
    t->inOrder(root);

    cout<<"\nPostOrder Traversal : ";
    //t->postOrder(root);*/

    // InOrder Traversal Without Recursion
    //t->inOrderwithoutRec(root);

    // Printing PostOrder using InOrder and PreOrder
    int in[] = {4,2,5,1,3,6};
    int pre[] = {1,2,4,5,3,6};

    printPostFromInAndPre(in, pre, sizeof(in)/sizeof(in[0]));



}
