#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int k,n,i,l,j; 
    scanf("%d",&n);
    l=n;
    for(i=1;i<=n;i++)
        {
        for(j=1;j<=l-1;j++)
        { printf(" ");
        } l--;
        for(k=1;k<=i;k++)
       {  printf("#");
        
       }
        
        printf("\n");
    }
    return 0;
}
