#include <bits/stdc++.h>
using namespace std;

class node{
public:
	node* parent;
	int value;
	int rank;
	node(int a){
		this->value=a;
	}

};


class Set{
public:

	node* makeSet(int y){
		node *x = new node (y);
		x->parent= x;
		x->rank=0;
		return x;
	}

	node* findSet(node* x){
		if(x->parent==x)
            return x ;
        x->parent = findSet(x->parent);
        return x->parent;
	}

	node* Union(node* x,node* y){
		node* a=findSet(x);
		node* b=findSet(y);
		if(a->rank > b->rank){
			b->parent = a;
		}
		else {
			a->parent = b;
			if(b->rank == a->rank)
				b->rank++;
		}

	}
};

struct edge{
    int u;
    int v;
    int w;
};

bool compareWeights(struct edge a,struct edge b){
    return (a.w < b.w);
}

int main()
{
      int v,e,i,j;
      cout<<"Enter the no. of nodes : ";
      cin>>v;
      Set s;
      node* V[v];
      for(i=0;i<v;i++)
      {
          V[i] = s.makeSet(i);
      }
      cout<<"Enter the no. of edges : ";
      cin>>e;
      vector<struct edge> E;
      struct edge ed;
      for(i=0;i<e;i++)
      {
          cin>>ed.u>>ed.v>>ed.v;
          E.push_back(ed);
      }
      sort(E.begin(), E.end(), compareWeights);

      vector<struct edge> T;
      for(i=0;i<e;i++)
      {
            ed = E[i];
            node* temp1 = s.findSet(V[ed.u]);
            node* temp2 = s.findSet(V[ed.v]);
            if(temp1 != temp2)
            {
                T.push_back(ed);
                s.Union(V[ed.u], V[ed.v]);
            }
      }
      cout<<endl;

      for(i=0;i<T.size();i++){
        cout<<T[i].u<<"\t"<<T[i].v<<"\t"<<T[i].w<<"\n";
    }

}

/*
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
        for(i=0;i<a.size();i++)
        {
            cout<<a[i].first<<endl;
        }

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



*/
