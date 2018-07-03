#include<bits/stdc++.h>
using namespace std;

void bfs(vector<int> adj[], int n, int k)
{
    int visited[n] = {0};

    queue<int> q;
    q.push(k);
    visited[k] = 1;

    while(!q.empty())
    {
        int p = q.front();
        q.pop();

        cout<<p<<" ";

        for(vector<int>::iterator i=adj[p].begin();i!=adj[p].end();i++)
        {
            if(!visited[*i])
            {
                q.push(*i);
                visited[*i] = 1;
            }
        }
    }

}

void dfs(vector<int> adj[],int* visited, int k)
{
   vector<int>::iterator it;
   for(it=adj[k].begin(); it != adj[k].end(); it++)
   {
       if(visited[*it] == 0)
       {
           cout<<*it<<" ";
           visited[*it] = 1;
           dfs(adj, visited,  *it);
       }

   }
}

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printEdges(vector<int> adj[], int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        int siz = adj[i].size();
        cout<<"vertex "<<i<<" : ";
        for(j=0;j<siz;j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int v, e;
    vector<int> adj[5];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);

    printEdges(adj, 5);

    cout<<"BFS of the Graph : ";
    bfs(adj, 5, 2);
    int visited[5] = {0};
    cout<<"\nDFS of the Graph : 2 ";
    visited[2] = 1;
    dfs(adj, visited, 2);

}
