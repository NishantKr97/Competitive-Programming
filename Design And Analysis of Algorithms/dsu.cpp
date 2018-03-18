#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int value;
        int rnk;
        Node *parent;

        Node (int x)
        {
                this->value = x;
        }
};


class Set
{
    public:
        Node *root;

        Node *make_set(int x)
        {
            Node *n = new Node(x);
            n->rnk = 0;
            n->value = x;
            n->parent = n;
        }

        Node *findSet(Node* x)
        {
            Node* temp = x;
            while(x->parent != x)
            {
                x = x->parent;
            }
            temp->parent = x;
            return x;
        }

        void Union(Node* x, Node* y)
        {
            Node* a = findSet(x);
            Node* b = findSet(y);
            if(a->rnk > b->rnk)
                b->parent = a;
            else if(b->rnk > a->rnk)
                a->parent = b;
            else
            {
                a->parent = b;
                b->rnk++;
            }
        }
};


int main()
{
    int n,i,j;
    cout<<"Enter no. of Nodes : ";
    cin>>n;
    Node* a[n];
    Set *s = new Set();
    for(i=0;i<n;i++)
    {
        a[i] = s->make_set(i);
    }


    s->Union(a[0], a[1]);
    s->Union(a[2], a[3]);
    s->Union(a[0], a[2]);
    // s->Union(a[2], a[4]);
    s->Union(a[4], a[5]);
    s->Union(a[4], a[6]);

    for(i=0;i<n;i++)
    {
        cout<<s->findSet(a[i])->value<<endl;
    }
}
