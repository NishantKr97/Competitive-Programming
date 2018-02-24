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
    char* t = (char *)malloc(512000 * sizeof(char));
    scanf("%s",t);
    int k,a,b,i,j,l,count; 
    scanf("%d",&k);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==t[i])
            count++;  
        else 
            break;
    }
    a=strlen(s)-count;
    b=strlen(t)-count;
    if(k>=strlen(s)+strlen(t))
        printf("Yes");
    else if((k-(a+b))>=0&&(k-(a+b))%2==0)
        printf("Yes");
        else 
        printf("No");
        
    return 0;
}
