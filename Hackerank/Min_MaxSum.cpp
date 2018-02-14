#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e,l,s,s1,s2;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    if(a>=b&&a>=c&&a>=d&&a>=e)
        l=a;
    else if(b>=a&&b>=c&&b>=d&&b>=e)
        l=b;
    else if(c>=a&&c>=b&&c>=d&&c>=e)
        l=c;
    else if(d>=a&&d>=b&&d>=c&&d>=e)
        l=d;
    else if(e>=a&&e>=b&&e>=c&&e>=d)
        l=e;
    s1=(a+b+c+d+e)-l;
    if(a<=b&&a<=c&&a<=d&&a<=e)
        s=a;
    else if(b<=a&&b<=c&&b<=d&&b<=e)
        s=b;
    else if(c<=a&&c<=b&&c<=d&&c<=e)
        s=c;
    else if(d<=a&&d<=b&&d<=c&&d<=e)
        s=d;
    else if(e<=a&&e<=b&&e<=c&&e<=d)
        s=e;
     s2=(a+b+c+d+e)-s;
        printf("%lld %lld",s1,s2);
    return 0;
}