#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,i,j,k=1,count=1;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n-1;i++)
    {
        count = 1;
        for(j=i+1;j<n;j++)
        {
            if(a[j]-a[i]<=1)
                count++;
        }
        
       if(count>k)
           k = count;
    }
    cout<<k;
    return 0;
}
