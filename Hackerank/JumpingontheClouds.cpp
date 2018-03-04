#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,count=0,i; 
    scanf("%d",&n);
    int *c = malloc(sizeof(int) * n);
    for(int c_i = 0; c_i < n; c_i++)
    {
       scanf("%d",&c[c_i]);
    }
    int t=n;
    for(i=0;i<t-1;i++)
    {
        if(c[i+2]==0)
        {
            count++;
            i++;
        }
        else 
            count++;
    }
    printf("%d",count);
    return 0;
}
