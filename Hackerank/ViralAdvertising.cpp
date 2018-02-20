#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k=5,l=0,m;
    scanf("%d",&n);
    l=k/2;
    for(i=1;i<n;i++)
    {
       k=(k/2)*3;
       l=l+k/2;
       // printf()
    }
    printf("%d",l);
        
    return 0;
}
