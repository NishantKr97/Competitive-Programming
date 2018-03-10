#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,a[1000],b[1000]={0},i,j,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
               b[k]=abs(i-j) ;
                k++;
            }
        }
    }
    sort(b,b+k);
    if(b[0]==0)
        printf("-1");
    else 
        printf("%d",b[0]);
    return 0;
}
