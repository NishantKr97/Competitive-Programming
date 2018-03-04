#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s",s);
    long n,i,c1=0,c2=0,p,q; 
    scanf("%ld",&n);
    for(i=0;i<strlen(s);i++)
        if(s[i]=='a')
          c1++;
    for(i=0;i<(n%strlen(s));i++)
        if(s[i]=='a')
          c2++;
    
   printf("%ld",((n/strlen(s))*c1)+c2);
   
          
         
          
    return 0;
}
