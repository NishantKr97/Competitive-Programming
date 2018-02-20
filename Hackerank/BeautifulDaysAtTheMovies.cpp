#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    long int i,j,k,m,n,t,l,sum=0,a;
    long int count=0;
   // char temp,a[2000000000],b[2000000000];
   scanf("%ld %ld %ld",&i,&j,&k);
    for(m=i;m<=j;m++)
    {   n=m;
        sum=0;
        while(n!=0)
        {
            a=n%10;
            sum=sum*10+a;
            n=n/10;
        }
        if(abs(m-sum)%k==0)
           { count++;
           //printf("%d ",m);
           } 
    }
    printf("%ld",count);
    
        
    return 0;
}
