#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,i,j,k,l,a[1000],c1=0,c2=0,key;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    key = a[0];
    
    for(i=1;i<n;i++)
    {
        if(a[i]>key)
        {
            key = a[i];
            c1++;
        }  
    }
    
    key = a[0];
     for(i=1;i<n;i++)
    {
        if(a[i]<key)
        {
            key = a[i];
            c2++;
        }  
    }
    
    cout<<c1<<" "<<c2;
    return 0;
}
