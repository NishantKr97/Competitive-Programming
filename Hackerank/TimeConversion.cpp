#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* time = (char *)malloc(10240 * sizeof(char));
    
    scanf("%s",time);
    if(time[8]=='A')
        {if((time[0]=='1')&&(time[1]=='2'))
        {time[0]='0';time[1]='0';}}
         else
             if(time[8]=='P'&&time[0]=='1'&&time[1]=='2')
         {for(int i=0;i<=7;i++)
         {printf("%c",time[i]);}
         exit(0);}
             else if(time[8]=='P')
             {if(time[1]<'8')
             {if(time[0]=='1')
             {time[0]='2';time[1]='3';}
              else 
              {time[0]='1';time[1]=time[1]+2;}}
              else if(time[1]>'7')
              {time[0]='2';
                  if(time[1]=='8'||time[1]=='9')
                  time[1]=time[1]-8;
               else time[1]=time[1]+2;}
             }
                                                
    
    for(int i=0;i<=7;i++)
        {printf("%c",time[i]);}
    
    
    
    
}