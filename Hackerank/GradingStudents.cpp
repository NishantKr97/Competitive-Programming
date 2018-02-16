#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a[100];
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%5==3&&a[i]>=38)
            a[i]=a[i]+2;
        else if(a[i]%5==4&&a[i]>=38)
            a[i]=a[i]+1;
        printf("%d\n",a[i]);
    }
    
    return 0;
}
