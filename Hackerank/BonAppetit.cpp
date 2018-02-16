#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,k,c[100000],i,j,l,t,sum=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
    }
    scanf("%d",&l);
    for(i=0;i<n;i++)
    {
        if(i!=k)
            sum=sum+c[i];
    }
    t=sum/2;
    if(l-t==0)
        printf("Bon Appetit");
    else 
        printf("%d",l-t);
        
    return 0;
}
