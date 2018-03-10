#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,count=0,a[10000],p,q,f1=0,f2=0;
    //string a[10000];
    scanf("%d %d\n",&n,&k);
    for(i=0;i<n;i++)
     cin>>a[i];
    for(i=0;i<n-2;i++)
    {
        p=a[i]+k;
        q=p+k;
        for(j=i+1;j<n;j++)
        {
            if(a[j]==p)
            {
                f1=1;
                break;
            }
            else 
                f1=0;
            
        }
        for(j=i+1;j<n;j++)
        {
            if(a[j]==q)
            {
                f2=1;
                break;
            }
            else
                f2=0;
        }
        if((f1==1)&&(f2==1))
        {
            //printf("%d %d %d\n",a[i],p,q);
            count++;
        }
    }
    cout<<count;
    return 0;
}
