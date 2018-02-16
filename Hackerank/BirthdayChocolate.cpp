#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,i,j,k,m,d,sum,count = 0;
    cin>>n;
    int a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>d>>m;
    for(i=0;i<n;i++)
    {
        sum = 0;
        for(j=i;j<m+i;j++)
        {
          sum = sum + a[j];   
        }
        if(sum == d)
            count++;
    }
    cout<<count;
    return 0;
}
