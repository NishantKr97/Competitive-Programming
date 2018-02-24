#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j=1;
    cout<<"Enter the no. of nodes : \n";
    cin>>n;
    list<int> a[n];
    for(i=0;i<n;i++)
    {
        int k;
        cout<<"Enter the no. of edges from vertex "<<i<<" : \n";
        cin>>k;
        for(j=0;j<k;j++)
        {
            int l;
            cout<<"Enter edge from "<<i<<" : ";
            cin>>l;
            a[i].push_back(l);
        }

    }

    for(i=0;i<n;i++)
    {
        cout<<i<<" -> ";
        list<int>::iterator it;
        for(it = a[i].begin(); it != a[i].end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
}
