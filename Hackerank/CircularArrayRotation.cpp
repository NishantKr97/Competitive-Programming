#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,k,q,i,j,l,p;
    cin>>n>>k>>q;
    int a[n],b[q],c[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        l = (k + i)%n;
        c[l] = a[i];
    }
    for(i=0;i<q;i++)
    {
        cin>>b[i];
        p = b[i];
        cout<<c[p]<<"\n";
    }
    return 0;
}
