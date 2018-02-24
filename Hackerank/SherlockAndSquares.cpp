#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t,i,j,m,n,v,u,count;
    float p;
    scanf("%d",&t);
    
    for(i=0;i<t;i++)
    {   count=0;
        scanf("%d %d",&m,&n);
        p=sqrt(m);
        u=sqrt(m);
        v=sqrt(n);
       if(p-u>0)
           u=u+1;
       printf("%d\n",v-u+1);
        
    }
               
        
    return 0;
}
