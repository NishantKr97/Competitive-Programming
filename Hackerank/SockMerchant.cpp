#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,temp,i,j,m; 
    scanf("%d",&n);
    int *c = malloc(sizeof(int) * n);
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d",&c[c_i]);
    }
    m=n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m-1;j++)
        {
            if(c[j]>c[j+1])
            {
             temp=c[j];
             c[j]=c[j+1];
             c[j+1]=temp;
            }
        }
        m--;
    }
    int count=0;
    for(i=0;i<n-1;i++)
    {
        if(c[i]==c[i+1])
        {
            count++;
            i++;
        }
    }
    printf("%d",count);
    return 0;
}
