#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n,i,j,temp,count=1; 
    scanf("%d",&n);
    int a[n];
    for(int arr_i = 0; arr_i < n; arr_i++)
    {
       scanf("%d",&a[arr_i]);
    }
    for(i=0;i<n;i++)
    {
      for(j=0;j<n-i-1;j++)
         if(a[j]>a[j+1])
         {
          temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
         }
    }
    j=n;
    printf("%d\n",j);
    for(i=0;i<n-1;i++)
    {  if(j==0)
        break;
       else if(a[i]==a[i+1])
       {
           count++;
       }
        else
        {   
            j=j-count;
            printf("%d\n",j);
            count=1;
        }
    }
   // printf("%d\n",n);
    
    return(0);
}