#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n,i,j,k,r,l;
    char* s = (char *)malloc(10240 * sizeof(char));
    char* v = (char *)malloc(10240 * sizeof(char));
    gets(s);
    k=strlen(s);
    
  //  printf("%d",l);
    for(i=0,j=0;i<k;i++)
    {
        if(s[i]!=' ')
        {
            v[j++]=s[i];
        }
        
    }
    v[j]='\0';
    k=strlen(v);
    r=sqrt(k);
    l=sqrt(k)+1;
    if(r*r==k)
     l--;
    for(i=0;i<l;i++)
    {
        for(j=i;j<k;j=j+l)
        {
            if(v[j]!='\0')
             printf("%c",v[j]);
           
        }
        printf(" ");
    }
    return 0;
}
