#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,i,j,p=0,count=0,v;
    cin>>n;
    char a[n];
    for(i=0;i<n;i++)
    {
        v = p;
        cin>>a[i];
        if(a[i]=='U')
            p++;
        if(a[i]=='D')
            p--;
        
        if(p==0&&v!=1)
            count++;
        
    }    
    
    cout<<count;
    return 0;
}
