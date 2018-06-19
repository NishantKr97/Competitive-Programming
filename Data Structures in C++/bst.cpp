#include<bits/stdc++.h>
using namespace std;

class Node{
    public :
        int data;
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
        temp->data = val;
        temp->left = NULL;
        temp->right = NULL;

        return temp;
    }

    Node* insertNode(Node* root, int val)
    {
        if(root == NULL){ root = newNode(val); return root; }

        if(val < root->data)
            root->left = insertNode(root->left, val);
        else if(val > root->data)
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
        cout<<root->data<<" ";
        printBST(root->right);
    }

    bool searchElement(Node* root, int key)
    {
        if(root == NULL) return false;

        if(root->data == key) return true;

        bool b;

        if(root->data > key) b = searchElement(root->left, key);
        else b = searchElement(root->right, key);

        return b;
    }

};

int main()
{
    Node* root = new Node;
    root->data = 8;
    root->left = NULL;
    root->right = NULL;

    BST* t = new BST;

    t->insertNode(root, 3);
    t->insertNode(root, 10);
    t->insertNode(root, 1);
    t->insertNode(root, 6);
    t->insertNode(root, 14);
    t->insertNode(root, 4);
    t->insertNode(root, 7);
    t->insertNode(root, 13);

    t->printBST(root);

    if(t->searchElement(root, 3))
        cout<<"\nFOUND "<<3<<endl;
    else
        cout<<"NOT FOUND\n";
}
