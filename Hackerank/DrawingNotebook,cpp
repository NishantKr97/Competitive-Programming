#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int no,i,j,pages,k,c1=0,c2=0;
    cin>>pages>>no;
    int a[pages];
    if(no%2!=0)
        no--;
    if(pages%2!=0)
        pages--;
    a[1] = 1;
    for(i=2;i<=pages;i++)
    {
        k = i;
        if(k%2 != 0)
            k--;
        a[i] = k;
    }
  //  for(i=1;i<=pages;i++)
    //    cout<<a[i]<<" ";
    if(no==0)
    {
        cout<<"0";
        exit(0);
    }
   for(i=2;i<=no;i++)
   {
       if(a[i]!=a[i-1])
           c1++;
   }
   for(i=pages-1;i>=no;i--)
   {
       if(a[i]!=a[i+1])
           c2++;
   }
    if(c1>c2)
        cout<<c2;
    else
        cout<<c1;
}
