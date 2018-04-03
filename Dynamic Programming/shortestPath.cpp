#include <bits/stdc++.h>
using namespace std;

int dist(int* a, int k, int v)
{
    if(k == 0)
        return 0;
    int min = 100000;
    for(int i=0;i<v;i++)
    {
        if(*( (a + v*k) + i) != 0 && *( (a + v*k) + i)  != -1000)
        {
            cout<<i<<" ";
            cout<<*( (a + v*k) + i)<<endl;
            int d = (dist((int *)a, i, v) + *( (a + v*k) + i));
                if( d < min)
                {
                     min = d;
                }
        }
    }

return min;
}

int main()
{
        int v,n,i,j,e;
        cout<<"Enter the no. of  vertices and edges :\n";
        cin>>v>>e;
        int a[v][v];


        for(i=0;i<v;i++)
        {
            for(j=0;j<v;j++)
            {
                if(i == j)
                {
                    a[i][j] = 0;
                    continue;
                }
                a[i][j] = -1000;
            }
        }

        cout<<"Enter the edges and their weights : \n";
        for(i=0;i<e;i++)
        {
            int x, y, z;
            cin>>x>>y>>z;
            a[x][y] = z;
        }

        int k;
        cout<<"Enter the sink vertex : ";
        cin>>k;
        int result =  dist((int *)a, k, v);
        if(result ==  100000)
            cout<<"INF";
        else
            cout<<result;



}



/*vector< vector<pair<int, int> > > adjList(v);

        cout<<"Enter the edges and the corresponding weights: \n";
        for(i=0;i<e;i++)
        {
            int a, b, c;
            cin>>a>>b>>c;;
            adjList[a].push_back(make_pair(b,c));
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<adjList[i].size();j++)
            {
                cout<<adjList[i][j].first<<" ";
            }
            cout<<endl;
        }

        int k;
        cout<<"Enter the point from where shortest path is required : ";
        cin>>k;

        int dist[v][v] = {};
        for(i=0;i<v;i++)
        {
            for(j=0;j<v;j++)
            {
                dist[i][j] = 10000;
            }
        }
        findShortestPath(adjList, k, dist);*/
