#include <bits/stdc++.h>
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
        int n,i,j,e;
        cout<<"Enter the no. of Nodes : ";
        cin>>n;
        cout<<"Enter no. of edges : ";
        cin>>e;


        Set *s = new Set();
        Node* v[n];
        for(i=0;i<n;i++)
        {
            v[i] = s->make_set(i);
        }

         vector< pair<  int,pair<Node* , Node*>  > > a;
         vector<pair<int, int> > b;
         cout<<"Enter edge and their weights : \n";

        for(i=0;i<e;i++)
        {
            int x,y,z;
            cin>>x>>y>>z;
            Node* q = v[x];
            Node* w = v[y];
            pair<Node* , Node* > k = make_pair(q,w);
            a.push_back(make_pair(z, k));
        }

        sort(a.begin(), a.end());

        for(i=0;i<e;i++)
        {
            if(s->findSet(a[i].second.first) != s->findSet(a[i].second.second))
            {
                b.push_back(make_pair(s->findSet(a[i].second.first)->value, s->findSet(a[i].second.second)->value));
                s->Union(a[i].second.first, a[i].second.second);
            }
        }

        for(i=0;i<b.size();i++)
        {
            cout<<b[i].first<<" "<<b[i].second<<endl;
        }



}
