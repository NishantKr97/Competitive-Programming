#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,i,j,count=1;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=n-1;i>=0;i--)
    {
        if(a[i]==a[i-1])
            count++;
        else
            break;
    }
    cout<<count;
    return 0;
}
