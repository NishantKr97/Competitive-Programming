#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,i,j,k,m,r=0;
    cin>>n>>m;
    int a[m];
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    int l = 0;
    
    sort(a,a+m);
    int max = 0;
    int p=0;
    for(i=0;i<m-1;i++)
    {
        p = (a[i+1]-a[i])/2;
        if(p>max)
        {
            max = p;
        }
    }
    
    int c = a[0] - 0;
    int b = n - 1 - a[m-1];
    
    if(c>b)
    {
        l = c;
    }
    else
        l = b;
    
    if(max<l)
        max = l;
    
    cout<<max;
    return 0;
}
