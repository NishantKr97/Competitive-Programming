#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,i,j,a[100],k;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    sort(a,a+n);
    //l=a.length();
    if(a[n-1]>k)
        printf("%d",a[n-1]-k);
    else 
        printf("0");
    
    return 0;
}
