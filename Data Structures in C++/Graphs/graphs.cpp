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

void nodesAtALevel(vector<int> adj[], int n, int k)
{
    queue<int> q;
    int visited[n] = {0};
    int level[n] = {0};

    q.push(0);

    while(!q.empty())
    {
        int s = q.front();
        q.pop();

        vector<int>::iterator it;
        for(it=adj[s].begin();it!=adj[s].end();it++)
        {
            if(visited[*it] == 0)
            {
                q.push(*it);
                level[*it] = level[s] + 1;
                visited[*it] = 1;
                if(level[*it] == k)
                  cout<<*it<<" ";

            //cout<<*it<<" "<<level[*it]<<endl;
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

void makeDirected(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
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

int checkCycle(vector<int> adj[], int v, int* visited, int* recStack)
{
    if(visited[v] == 0)
    {
        visited[v] = 1;
        recStack[v] = 1;

        vector<int>::iterator it;
        for(it=adj[v].begin();it!=adj[v].end();it++)
        {
            if(recStack[*it] == 1)
                return 1;
            else if(checkCycle(adj, *it, visited, recStack))
                return 1;
        }
    }
    recStack[v] = 0;
    return 0;
}

int detectCycle(vector<int> adj[], int n)
{
    int visited[n] = {0};
    int recStack[n] = {0};

    for(int i=0;i<n;i++)
    {
        if(checkCycle(adj, i, visited, recStack))
            return 1;
    }

    return 0;
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

    vector<int> tree[7];
    makeDirected(tree, 0, 1);
    makeDirected(tree, 0, 2);
    makeDirected(tree, 1, 3);
    makeDirected(tree, 1, 4);
    makeDirected(tree, 1, 5);
    makeDirected(tree, 2, 6);
    cout<<"\nNodes at level 2 : ";
    nodesAtALevel(tree, 7, 2);

    vector<int> cyc[6];
    makeDirected(cyc, 0, 1);
    makeDirected(cyc, 1, 2);
    makeDirected(cyc, 2, 3);
    makeDirected(cyc, 0, 3);
    makeDirected(cyc, 4, 5);
    makeDirected(cyc, 1, 4);
    makeDirected(cyc, 0, 5);
    cout<<"\nCycle present : "<<detectCycle(cyc, 6);

    vector<int> cyc2[6];
    makeDirected(cyc2, 0, 1);
    makeDirected(cyc2, 1, 2);
    makeDirected(cyc2, 2, 3);
    makeDirected(cyc2, 3, 4);
    makeDirected(cyc2, 4, 5);
    makeDirected(cyc2, 0, 5);
    //makeDirected(cyc2, 0, 5);
    cout<<"\nCycle present : "<<detectCycle(cyc2, 6);

}
