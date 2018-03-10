#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int d,t,n,c,m,i,j,k,a,b;
    scanf("%d\n",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d\n",&n,&c,&m);
      
        k=n/c;
          d=k;
        while(1)
        {
            
            if(d>=m)
            {  
               
               a = d/m;
               b = d%m;
               d = a+b;
               k = k+a;
               //printf("%d ",k);
            }
            else 
                break;
        }
        printf("%d\n",k);
    }
    return 0;
}
