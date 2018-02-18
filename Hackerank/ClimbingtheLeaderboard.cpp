#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,i,j,k=1,m,rank;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    int b[m];
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int c[n];
    sort(a,a+n);
    c[0] = a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]!=a[i-1])
        {
            c[k] = a[i];
            k++;
        }
    }
   // cout<<k<<" ";
   //for(i=0;i<k;i++)
     //  cout<<c[i]<<" ";
    //cout<<"\n";
    int l = 0;
    for(i=0;i<m;i++)
    {
       for(j=l;j<k;j++)
       {
           if(b[i]<c[j])
           {
               rank = k-j+1;
               break;
           }
           if(b[i]==c[j])
           {
               rank = k-j;
               break;
           }
           if(b[i]>c[k-1])
           {
               rank = 1;
               break;
           }
           
       }
        l = j;
        cout<<rank<<"\n";
    }
    return 0;
}
