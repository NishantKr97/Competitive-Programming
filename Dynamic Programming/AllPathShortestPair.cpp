#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,v,e,i,j,k;
    cout<<"Enter no. of vertices and edges : ";
    cin>>v>>e;
    int a[v][v], b[v][v], c[v][v], d[v][v];

    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            if(i == j)
                a[i][j] = 0;
            else
                a[i][j] = 1000;
        }
    }

    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            c[i][j] = -1;
            d[i][j] = -1;
        }
    }


    cout<<"Enter the edges and corresponding weights : \n";
    for(i = 0;i < e;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        a[u][v] = w;
        b[u][v] = w;
        c[u][v] = u;
        d[u][v] = u;
    }


    cout<<"Your graph is : \n";
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


    for(k=0;k<v;k++)
    {
        for(i=0;i<v;i++)
        {
            for(j=0;j<v;j++)
            {
                b[i][j] = min(a[i][j], a[i][k]+a[k][j]);

                if(a[i][j] < a[i][k]+a[k][j])
                {
                    c[i][j] = i;
                }
                else
                {
                    c[i][j] = k;
                }

                //int g = c[i][j];
                //int h = c[k][j];

            }
        }


        for(i=0;i<v;i++)
        {
            for(j=0;j<v;j++)
            {
                a[i][j] = b[i][j];
            }
        }

    }

    cout<<"\nAll Pair Shortest Path Weights are : \n";
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


    cout<<"\nAll Pair Shortest Path is : \n";
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

}

