#include<bits/stdc++.h>
using namespace std;

class Node{
    public :
        int data;
        Node* left;
        Node* right;
        Node* parent;
};

class BST{

public:
    Node* root;

public:

    Node* newNode(int val, Node* par)
    {
        Node* temp = new Node;
        temp->data = val;
        temp->left = NULL;
        temp->right = NULL;
        temp->parent = par;
        return temp;
    }

    Node* insertNode(Node* root,Node* parent,  int val)
    {
        if(root == NULL){ root = newNode(val, parent); return root; }

        if(val < root->data)
            root->left = insertNode(root->left, root,  val);
        else if(val > root->data)
            root->right = insertNode(root->right, root, val);
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

    Node* searchElt(Node* root, int key)
    {
        if(root == NULL) return NULL;
        if(root->data == key) return root;

        Node* ptr = new Node;
        if(root->data > key) ptr = searchElt(root->left, key);
        if(root->data < key) ptr = searchElt(root->right, key);

        return ptr;
    }

    Node* findPred(Node* root, int key)
    {
        if(root == NULL) return NULL;

        Node* ptr = root->left;
        while(ptr->right != NULL)
            ptr = ptr->right;

        return ptr;
    }

    void deleteNode(Node* root, int key)
    {
        Node* ptr = searchElt(root, key);
        //cout<<ptr->data<<" ";

        if(ptr == NULL) { cout<<"INVALID KEY\n"; return;}

        if(ptr->left == NULL && ptr->right == NULL) { ptr->data = NULL; free(ptr); }

        if(ptr->left != NULL && ptr->right == NULL) {ptr->parent->left == ptr ? ptr->parent->left = ptr->left : ptr->parent->right = ptr->left;}
        if(ptr->left == NULL && ptr->right != NULL) {ptr->parent->right == ptr ? ptr->parent->right = ptr->right : ptr->parent->left = ptr->right;}

        if(ptr->left != NULL && ptr->right != NULL)
        {
            Node* temp = findPred(ptr, key);
            ptr->data = temp->data;
            temp->data = NULL;
            temp->parent->right = NULL;
            free(temp);

        }
    }


    Node* balancedTree(int arr[], int low, int high)
    {
        if(low > high)
            return NULL;

        int mid = (low + high) / 2;
        Node* root = newNode(arr[mid], NULL);
        root->left = balancedTree(arr, low, mid-1);
        root->right = balancedTree(arr, mid+1, high);

        return root;
    }

};

int main()
{
    Node* root = new Node;
    root->data = 8;
    root->left = NULL;
    root->right = NULL;

    BST* t = new BST;

    t->insertNode(root, NULL, 3);
    t->insertNode(root, NULL, 10);
    t->insertNode(root, NULL, 1);
    t->insertNode(root, NULL, 6);
    t->insertNode(root, NULL, 14);
    t->insertNode(root, NULL, 4);
    t->insertNode(root, NULL, 7);
    t->insertNode(root, NULL, 13);

    t->printBST(root);

    t->searchElement(root, 3) ? cout<<"\nFOUND "<<3<<endl : cout<<"NOT FOUND\n";

    t->deleteNode(root, 8);
    t->printBST(root);
    cout<<endl;

    //New TREE
    Node* root1 = new Node;
    BST* t1 = new BST;

    int arr[] = {1,2,3,4,5,6,7,8};
    root1 = t1->balancedTree(arr, 0, 7);
    t1->printBST(root1);

}
