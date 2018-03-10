#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long int n,i,j,l,w,b,w1,w2,b1,b2,x,y,z;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld %ld\n%ld %ld %ld",&w,&b,&x,&y,&z);
        w1=w*x;
        w2=w*(y+z);
        b1=b*y;
        b2=b*(x+z);
        printf("%ld\n",min(w1,w2)+min(b1,b2));
    }
    return 0;
}
