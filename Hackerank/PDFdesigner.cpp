#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{   
    long int n=26,l,i,j,sum=0,t=0,s,count=0;
    int *h = malloc(sizeof(int) * n);
    for(int i = 0; i< n; i++)
    {
       scanf("%d",&h[i]);
    }
    char* word = (char *)malloc(512000 * sizeof(char));
    scanf("%s",word);
    l=strlen(word);
    for(i=0;i<l;i++)
        if(word[i]==' ')
        count++;
    for(i=0;i<=l;i++)
    {   
        switch(word[i])
            {
             case 'a': s=h[0];
                       break;
             case 'b': s=h[1];
                       break;
             case 'c': s=h[2];
                       break;
             case 'd': s=h[3];
                       break;
             case 'e': s=h[4];
                       break;
             case 'f': s=h[5];
                       break;
             case 'g': s=h[6];
                       break;
             case 'h': s=h[7];
                       break;
             case 'i': s=h[8];
                       break;
             case 'j': s=h[9];
                       break;   
             case 'k': s=h[10];
                       break; 
             case 'l': s=h[11];
                       break;   
             case 'm': s=h[12];
                       break;
             case 'n': s=h[13];
                       break;      
             case 'o': s=h[14];
                       break;
             case 'p': s=h[15];
                       break;    
             case 'q': s=h[16];
                       break;    
             case 'r': s=h[17];
                       break;    
             case 's': s=h[18];
                       break;
             case 't': s=h[19];
                       break;
             case 'u': s=h[20];
                       break;   
             case 'v': s=h[21];
                       break;   
             case 'w': s=h[22];
                       break;    
             case 'x': s=h[23];
                       break;   
             case 'y': s=h[24];
                       break;     
             case 'z': s=h[25];
                       break;    
             case ' ':  sum=sum+t;
                       // printf("%ld",sum);
                       break;
            case '\0': sum=sum+t;
                       break;
            default: break;
             }
          if(s>t)
          {
              t=s;
          }
        
        }
    
      printf("%ld",sum*(l-count));    
    return 0;
}
