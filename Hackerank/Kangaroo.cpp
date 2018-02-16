#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int x1; 
    int v1; 
    int x2; 
    int v2,i; 
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    if(x1<x2&&v1>v2)
    {for(i=1;i<=10000;i++)
       { x1=x1+v1;
        x2=x2+v2;
        if(x1==x2)
        {printf("YES");
           break;
        }
     if(i==10000)
         printf("NO");
       }}
    else 
        printf("NO");
    return 0;
}
