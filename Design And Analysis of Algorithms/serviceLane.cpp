#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t,n,i,j,a,b,l[100000],m[100000];
    scanf("%d %d",&n,&t);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&l[i]);
    }
    for(i=0;i<n;i++)
    {
        m[i]=l[i];
    }
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&a,&b);
        sort(l+a,l+b+1);
       
        printf("%d\n",l[a]);
        for(j=a;j<=b;j++)
        {
         l[j]=m[j];
        }
    }
    return 0;
}