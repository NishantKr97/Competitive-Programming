#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,b[5]={0},key,value=0;
    cin>>n;
    int a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        b[a[i]-1]++;
    }
   
    key = b[0];
    for(i=1;i<5;i++)
    {
        if(b[i]>key)
        {
            key = b[i];
             value = i;
           // cout<<i<<" ";
        }
           
    }
    cout<<value+1;
    return 0;
}
