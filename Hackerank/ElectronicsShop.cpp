#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int s,n,m,i,j,c1=-1,c2=-1,t;
    cin>>s>>n>>m;
    int a[n],b[m];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<m;i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    for(i=n-1;i>=0;i--)
    {
        for(j=m-1;j>=0;j--)
        {
            c1 = a[i] + b[j];
            if(c1>c2&&c1<=s)
                c2 = c1;
        }
        
    }
    
   /* for(i=m-1;i>=0;i--)
    {
        for(j=n-1;j>=0;j--)
        {
            t = b[i] + a[j];
            if(t>c2&&t<=s)
            {
                c2 = t;
                break;
            }
        }
        if(c2!=0)
            break;
    }
   // t = -1;
   // cout<<c1<<" "<<c2<<" ";
    if(c1==0&&c2==0)
        cout<<"-1";
    if(c1==c2&&c1!=0)
        cout<<c1;
    if(c1>c2)
        cout<<c1;
    if(c2>c1)
        cout<<c2;*/
   cout<<c2;
    return 0;
}
