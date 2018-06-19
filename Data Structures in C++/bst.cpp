#include<bits/stdc++.h>
using namespace std;

class Node{
    public :
        int value;
        Node* left;
        Node* right;
};

class BST{

public:
    Node* root;

public:

    Node* newNode(int val)
    {
        Node* temp = new Node;
        temp->value = val;
        temp->left = NULL;
        temp->right = NULL;

        return temp;
    }

    Node* insertNode(Node* root, int val)
    {
        if(root == NULL){ root = newNode(val); return root; }

        if(val < root->value)
            root->left = insertNode(root->left, val);
        else if(val > root->value)
            root->right = insertNode(root->right, val);
        else
            return NULL;

        return root;
    }

    void printBST(Node* root)
    {
        if(root == NULL)
            return;

        printBST(root->left);
        cout<<root->value<<" ";
        printBST(root->right);
    }

};

int main()
{
    Node* root = new Node;
    root->value = 8;
    root->left = NULL;
    root->right = NULL;

    BST* t = new BST;

    t->insertNode(root, 3);
    t->insertNode(root, 10);
    t->insertNode(root, 1);
    t->insertNode(root, 6);
    t->insertNode(root, 10);
    t->insertNode(root, 4);
    t->insertNode(root, 7);
    t->insertNode(root, 13);

    t->printBST(root);
}
