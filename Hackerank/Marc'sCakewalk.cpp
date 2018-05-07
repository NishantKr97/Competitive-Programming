#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,i,j;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    
    sort(a,a+n);
    long long c = 0;
    for(i=n-1;i>=0;i--)
    {
     c = c + (a[i] * pow(2,n - i-1));  
    //cout<<c<<" ";
    }
    
    cout<<c;
    return 0;
}
