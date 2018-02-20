#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t,i,h=1; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++)
    {   h=1;
        int n; 
        scanf("%d",&n);
        if(n==0)
            h=1;
        else
        {    
         for(i=1;i<=n;i++)
         {  
          if(i%2==1)
               h=2*h;
          else
                h=h+1;
         } 
       // printf("%d\n",h);
        }
        printf("%d\n",h);
    }  
    return 0;
}
