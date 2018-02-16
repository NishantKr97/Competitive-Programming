#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int s; 
    int t; 
    scanf("%d %d",&s,&t);
    int a; 
    int b; 
    scanf("%d %d",&a,&b);
    int m; 
    int n,k,l,c1=0,c2=0,i; 
    scanf("%d %d",&m,&n);
    int *apple = malloc(sizeof(int) * m);
    for(int apple_i = 0; apple_i < m; apple_i++){
       scanf("%d",&apple[apple_i]);
    }
    int *orange = malloc(sizeof(int) * n);
    for(int orange_i = 0; orange_i < n; orange_i++){
       scanf("%d",&orange[orange_i]);
    }
    for(i=0;i<m;i++)
    {
        k=a+apple[i];
        if(s<=k&&t>=k)
            c1++;
    }
    for(i=0;i<n;i++)
    {
        l=b+orange[i];
        if(t>=l&&s<=l)
            c2++;
    }
   printf("%d\n%d",c1,c2);
    
    return 0;
}
